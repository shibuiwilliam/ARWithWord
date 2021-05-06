using System;
using UnityEngine;
using Unity.Barracuda;
using System.Linq;
using System.Collections;
using System.Collections.Generic;


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
        EN,
        JP
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


    public void Start()
    {
        switch(this.labelLanguage)
        {
            case LabelLanguages.EN:
                this.labels = Constants.cocoLabelEN;
                break;
            case LabelLanguages.JP:
                this.labels = Constants.cocoLabelJP;
                break;
            default:
                this.labels = Constants.cocoLabelEN;
                break;
        }
        this.classLength = this.labels.Length;

        this.model = ModelLoader.Load(this.modelFile);
        this.worker = GraphicsWorker.GetWorker(this.model);
        Debug.Log($"Initialized model and labels: {this.classLength} classes");
    }


    public IEnumerator Detect(Color32[] picture, Action<IList<ItemDetected>> callback)
    {
        Debug.Log("Run detection");
        using (var tensor = TransformInput(picture, this.IMAGE_SIZE, this.IMAGE_SIZE))
        {
            var inputs = new Dictionary<string, Tensor>();
            inputs.Add(this.inputName, tensor);
            yield return StartCoroutine(this.worker.StartManualSchedule(inputs));
            var outputL = this.worker.PeekOutput(this.outputNameL);
            var outputM = this.worker.PeekOutput(this.outputNameM);
            List<ItemDetected> results = ParseOutputs(outputL, outputM, this.paramsL, this.paramsM);
            Debug.Log($"yielded {results.Count()} results");
            callback(results);
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

    private List<ItemDetected> ParseOutputs(Tensor yoloModelOutputL, Tensor yoloModelOutputM, Parameters parametersL, Parameters parametersM)
    {
        var itemsInCenter = new List<ItemDetected>();

        for (var box = 0; box < BOXES_PER_CELL; box++)
        {
            for (int cy = 0; cy < parametersL.COL_COUNT; cy++)
            {
                for (var cx = 0; cx < parametersL.ROW_COUNT; cx++)
                {
                    var result = Parse(cx, cy, box, yoloModelOutputL);
                    if (result != null)
                    {
                        itemsInCenter.Add(result);
                    }
                }
            }

            for (int cy = 0; cy < parametersM.COL_COUNT; cy++)
            {
                for (var cx = 0; cx < parametersM.ROW_COUNT; cx++)
                {
                    var result = Parse(cx, cy, box, yoloModelOutputM);
                    if (result != null)
                    {
                        itemsInCenter.Add(result);
                    }
                }
            }
        }

        return itemsInCenter;
    }

    private ItemDetected Parse(int cx, int cy, int box, Tensor yoloModelOutput)
    {
        var channel = (box * (this.classLength + BOX_INFO_FEATURE_COUNT));
        float confidence = GetConfidence(yoloModelOutput, cx, cy, channel);
        if (confidence < this.minConfidence)
        {
            return null;
        }

        float[] predictedClasses = ExtractClasses(yoloModelOutput, cx, cy, channel);
        var (topResultIndex, topResultScore) = GetTopResult(predictedClasses);
        var topScore = topResultScore * confidence;
        if (topScore < this.minConfidence)
        {
            return null;
        }

        //var x = yoloModelOutput[0, cx, cy, channel];
        //var y = yoloModelOutput[0, cx, cy, channel + 1];
        //var width = yoloModelOutput[0, cx, cy, channel + 2];
        //var height = yoloModelOutput[0, cx, cy, channel + 3];
        //var centerX = x + (width / 2f);
        //var centerY = y + (height / 2f);

        var itemInCenter = new ItemDetected
        {
            //CenterPoint = new XY
            //{
            //    X = centerX,
            //    Y = centerY,
            //},
            PredictedItem = new Prediction
            {
                Label = labels[topResultIndex],
                Confidence = topScore,
            }
        };

        return itemInCenter;
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



    private float GetConfidence(Tensor modelOutput, int x, int y, int channel)
    {
        return Sigmoid(modelOutput[0, x, y, channel + 4]);
    }

    public float[] ExtractClasses(Tensor modelOutput, int x, int y, int channel)
    {
        float[] predictedClasses = new float[this.classLength];
        int predictedClassOffset = channel + BOX_INFO_FEATURE_COUNT;

        for (var predictedClass = 0; predictedClass < this.classLength; predictedClass++)
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

}