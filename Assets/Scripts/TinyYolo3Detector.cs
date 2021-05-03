using System;
using UnityEngine;
using Unity.Barracuda;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;


public class Parameters
{
    public int ROW_COUNT;
    public int COL_COUNT;
    public int CELL_WIDTH;
    public int CELL_HEIGHT;
    public Parameters(int ROW_COUNT, int COL_COUNT, int CELL_WIDTH, int CELL_HEIGHT)
    {
        this.ROW_COUNT = ROW_COUNT;
        this.COL_COUNT = COL_COUNT;
        this.CELL_WIDTH = CELL_WIDTH;
        this.CELL_HEIGHT = CELL_HEIGHT;
    }
}

public class TinyYolo3Detector : MonoBehaviour, ObjectDetector
{

    public NNModel modelFile;

    public enum LabelLanguages
    {
        EN
    };
    public LabelLanguages labelLanguage;


    public string inputName;
    public string outputNameL;
    public string outputNameM;

    private const int IMAGE_MEAN = 0;
    private const float IMAGE_STD = 255.0F;
    private const int _IMAGE_SIZE = 416;
    public int IMAGE_SIZE
    {
        get => _IMAGE_SIZE;
    }

    public float minConfidence = 0.25f;

    private IWorker worker;
    private Model model;

    public Parameters paramsL = new Parameters(13, 13, 32, 32);
    public Parameters paramsM = new Parameters(26, 26, 16, 16);

    public const int BOXES_PER_CELL = 3;
    public const int BOX_INFO_FEATURE_COUNT = 5;

    private int classLength;
    private string[] labels;

    private float[] anchors = new float[]
    {
        10F, 14F,  23F, 27F,  37F, 58F,  81F, 82F,  135F, 169F,  344F, 319F 
    };


    public void Start()
    {
        if (this.labelLanguage == LabelLanguages.EN)
        {
            this.labels = Constants.cocoLabelEN;
        }
        else
        {
            this.labels = Constants.cocoLabelEN;
        }
        this.classLength = this.labels.Length;
        this.model = ModelLoader.Load(this.modelFile);
        this.worker = GraphicsWorker.GetWorker(this.model);
        Debug.Log($"Initialized model and labels: {this.classLength} classes");
    }


    public IEnumerator Detect(Color32[] picture, Action<IList<BoundingBox>> callback)
    {
        Debug.Log("Run detection");
        using (var tensor = TransformInput(picture, this.IMAGE_SIZE, this.IMAGE_SIZE))
        {
            var inputs = new Dictionary<string, Tensor>();
            inputs.Add(this.inputName, tensor);
            yield return StartCoroutine(this.worker.StartManualSchedule(inputs));
            //worker.Execute(inputs);
            var output_l = this.worker.PeekOutput(this.outputNameL);
            var output_m = this.worker.PeekOutput(this.outputNameM);
            //Debug.Log("Output: " + output);
            var results_l = ParseOutputs(output_l, this.minConfidence, this.paramsL);
            var results_m = ParseOutputs(output_m, this.minConfidence, this.paramsM);
            IList<BoundingBox> results = results_l.Concat(results_m).ToList();

            IList<BoundingBox> boxes = FilterBoundingBoxes(results, 5, this.minConfidence);
            Debug.Log($"Detected {boxes.Count()} items");
            callback(boxes);
        }
    }


    public static Tensor TransformInput(Color32[] pic, int width, int height)
    {
        float[] floatValues = new float[width * height * 3];

        for (int i = 0; i < pic.Length; ++i)
        {
            Color32 color = pic[i];

            floatValues[i * 3 + 0] = (color.r - IMAGE_MEAN) / IMAGE_STD;
            floatValues[i * 3 + 1] = (color.g - IMAGE_MEAN) / IMAGE_STD;
            floatValues[i * 3 + 2] = (color.b - IMAGE_MEAN) / IMAGE_STD;
        }

        return new Tensor(1, height, width, 3, floatValues);
    }


    private IList<BoundingBox> ParseOutputs(Tensor yoloModelOutput, float threshold, Parameters parameters)
    {
        var boxes = new List<BoundingBox>();

        for (int cy = 0; cy < parameters.COL_COUNT; cy++)
        {
            for (int cx = 0; cx < parameters.ROW_COUNT; cx++)
            {
                for (int box = 0; box < BOXES_PER_CELL; box++)
                {
                    var channel = (box * (this.classLength + BOX_INFO_FEATURE_COUNT));
                    var bbd = ExtractBoundingBoxDimensions(yoloModelOutput, cx, cy, channel);
                    float confidence = GetConfidence(yoloModelOutput, cx, cy, channel);

                    if (confidence < threshold)
                    {
                        continue;
                    }

                    float[] predictedClasses = ExtractClasses(yoloModelOutput, cx, cy, channel);
                    var (topResultIndex, topResultScore) = GetTopResult(predictedClasses);
                    var topScore = topResultScore * confidence;
                    Debug.Log($"DEBUG: results: {topResultIndex} with score {topScore}");

                    if (topScore < threshold)
                    {
                        continue;
                    }

                    var mappedBoundingBox = MapBoundingBoxToCell(cx, cy, box, bbd, parameters);
                    boxes.Add(new BoundingBox
                    {
                        Dimensions = new BoundingBoxDimensions
                        {
                            X = (mappedBoundingBox.X - mappedBoundingBox.Width / 2),
                            Y = (mappedBoundingBox.Y - mappedBoundingBox.Height / 2),
                            Width = mappedBoundingBox.Width,
                            Height = mappedBoundingBox.Height,
                        },
                        Confidence = topScore,
                        Label = labels[topResultIndex],
                        Used = false
                    });
                }
            }
        }

        return boxes;
    }


    private float Sigmoid(float value)
    {
        var k = (float)Math.Exp(value);
        return k / (1.0f + k);
    }


    private float[] Softmax(float[] values)
    {
        var maxVal = values.Max();
        var exp = values.Select(v => Math.Exp(v - maxVal));
        var sumExp = exp.Sum();
        return exp.Select(v => (float)(v / sumExp)).ToArray();
    }


    private BoundingBoxDimensions ExtractBoundingBoxDimensions(Tensor modelOutput, int x, int y, int channel)
    {
        return new BoundingBoxDimensions
        {
            X = modelOutput[0, x, y, channel],
            Y = modelOutput[0, x, y, channel + 1],
            Width = modelOutput[0, x, y, channel + 2],
            Height = modelOutput[0, x, y, channel + 3]
        };
    }


    private float GetConfidence(Tensor modelOutput, int x, int y, int channel)
    {
        return Sigmoid(modelOutput[0, x, y, channel + 4]);
    }


    private CellDimensions MapBoundingBoxToCell(int x, int y, int box, BoundingBoxDimensions boxDimensions, Parameters parameters)
    {
        return new CellDimensions
        {
            X = ((float)y + Sigmoid(boxDimensions.X)) * parameters.CELL_WIDTH,
            Y = ((float)x + Sigmoid(boxDimensions.Y)) * parameters.CELL_HEIGHT,
            Width = (float)Math.Exp(boxDimensions.Width) * anchors[6 + box * 2],
            Height = (float)Math.Exp(boxDimensions.Height) * anchors[6 + box * 2 + 1],
        };
    }


    public float[] ExtractClasses(Tensor modelOutput, int x, int y, int channel)
    {
        float[] predictedClasses = new float[this.classLength];
        int predictedClassOffset = channel + BOX_INFO_FEATURE_COUNT;

        for (int predictedClass = 0; predictedClass < this.classLength; predictedClass++)
        {
            predictedClasses[predictedClass] = modelOutput[0, x, y, predictedClass + predictedClassOffset];
        }

        return Softmax(predictedClasses);
    }


    private ValueTuple<int, float> GetTopResult(float[] predictedClasses)
    {
        return predictedClasses
            .Select((predictedClass, index) => (Index: index, Value: predictedClass))
            .OrderByDescending(result => result.Value)
            .First();
    }


    private List<ValueTuple<int, float>> GetOrderedResult(float[] predictedClasses)
    {
        return predictedClasses
            .Select((predictedClass, index) => (Index: index, Value: predictedClass))
            .OrderByDescending(result => result.Value)
            .ToList();
    }

    private float IntersectionOverUnion(Rect boundingBoxA, Rect boundingBoxB)
    {
        var areaA = boundingBoxA.width * boundingBoxA.height;

        if (areaA <= 0)
            return 0;

        var areaB = boundingBoxB.width * boundingBoxB.height;

        if (areaB <= 0)
            return 0;

        var minX = Math.Max(boundingBoxA.xMin, boundingBoxB.xMin);
        var minY = Math.Max(boundingBoxA.yMin, boundingBoxB.yMin);
        var maxX = Math.Min(boundingBoxA.xMax, boundingBoxB.xMax);
        var maxY = Math.Min(boundingBoxA.yMax, boundingBoxB.yMax);

        var intersectionArea = Math.Max(maxY - minY, 0) * Math.Max(maxX - minX, 0);

        return intersectionArea / (areaA + areaB - intersectionArea);
    }


    private IList<BoundingBox> FilterBoundingBoxes(IList<BoundingBox> boxes, int limit, float threshold)
    {
        var activeCount = boxes.Count;
        var isActiveBoxes = new bool[boxes.Count];

        for (int i = 0; i < isActiveBoxes.Length; i++)
        {
            isActiveBoxes[i] = true;
        }

        var sortedBoxes = boxes.Select((b, i) => new { Box = b, Index = i })
                .OrderByDescending(b => b.Box.Confidence)
                .ToList();

        var results = new List<BoundingBox>();

        for (int i = 0; i < boxes.Count; i++)
        {
            if (isActiveBoxes[i])
            {
                var boxA = sortedBoxes[i].Box;
                results.Add(boxA);

                if (results.Count >= limit)
                    break;

                for (var j = i + 1; j < boxes.Count; j++)
                {
                    if (isActiveBoxes[j])
                    {
                        var boxB = sortedBoxes[j].Box;

                        if (IntersectionOverUnion(boxA.Rect, boxB.Rect) > threshold)
                        {
                            isActiveBoxes[j] = false;
                            activeCount--;

                            if (activeCount <= 0)
                                break;
                        }
                    }
                }

                if (activeCount <= 0)
                    break;
            }
        }
        return results;
    }
}