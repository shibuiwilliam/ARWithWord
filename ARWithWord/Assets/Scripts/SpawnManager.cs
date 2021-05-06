using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Barracuda;

public class DetectionTarget
{
    public Texture2D CurrentTexture2D
    {
        get;
        set;
    }
    public Pose HitPose
    {
        get;
        set;
    }
}

public class Detected
{
    public Pose HitPose
    {
        get;
        set;
    }
    public IList<ItemDetected> ItemsDetected
    {
        get;
        set;
    }
}

public class DetectedSimilarWords
{
    public Pose HitPose
    {
        get;
        set;
    }
    public SimilarWords SimilarWords
    {
        get;
        set;
    }
}

public class SpawnManager : MonoBehaviour
{
    [SerializeField] GameObject goText;

    [SerializeField]
    ARCameraManager m_arCameraManager;
    public ARCameraManager arCameraManager
    {
        get { return m_arCameraManager; }
        set { m_arCameraManager = value; }
    }

    [SerializeField]
    GameObject m_goObjectDetector;
    public GameObject goObjectDetector
    {
        get { return m_goObjectDetector; }
        set { m_goObjectDetector = value; }
    }
    private ObjectDetector objectDetector;


    [SerializeField]
    GameObject m_goSimilarWordClient;
    public GameObject goSimilarWordClient
    {
        get { return m_goSimilarWordClient; }
        set { m_goSimilarWordClient = value; }
    }
    private SimilarWordClient similarWordClient;

    public float shiftX = 0f;
    public float shiftY = 0f;
    public float scaleFactor = 1;

    private ARRaycastManager arRaycastManager;
    private List<ARRaycastHit> hits = new List<ARRaycastHit>();

    private static Texture2D _texture;

    private bool isDetecting = false;

    Texture2D m_Texture;

    Queue<DetectionTarget> detectionTargetQueue = new Queue<DetectionTarget>();
    Queue<Detected> detectedQueue = new Queue<Detected>();
    Queue<DetectedSimilarWords> detectedSimilarWordsQueue = new Queue<DetectedSimilarWords>();

    private List<Color32> colors = new List<Color32>() {
        new Color32(255, 115, 200, 255),
        new Color32(241, 233, 137, 255),
        new Color32(108, 109, 101, 255),
        new Color32(128, 244, 222, 255),
        new Color32(134, 222, 249, 255),
        new Color32(228, 178, 249, 255)
    };

    private void OnEnable()
    {
        Debug.Log("initialize AR camera manager frame received");
        m_arCameraManager.frameReceived += OnCameraFrameReceived;
        _texture = new Texture2D(1, 1);
        _texture.SetPixel(0, 0, new Color(0.3843137f, 0, 0.9333333f));
        _texture.Apply();
    }

    void Start()
    {
        this.arRaycastManager = GetComponent<ARRaycastManager>();

        this.objectDetector = goObjectDetector.GetComponent<TinyYolo3Detector>();
        this.objectDetector.Start();

        this.similarWordClient = goSimilarWordClient.GetComponent<SimilarWordClient>();
        this.similarWordClient.Start();

        CalculateShift();
    }

    void Update()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Began)
            {
                if (arRaycastManager.Raycast(touch.position, hits, TrackableType.PlaneWithinPolygon))
                {
                    Pose hitPose = hits[0].pose;
                    var detectionTarget = new DetectionTarget
                    {
                        CurrentTexture2D = this.m_Texture,
                        HitPose = hitPose
                    };
                    this.detectionTargetQueue.Enqueue(detectionTarget);
                    Debug.Log($"touched ({hitPose.position.x}, {hitPose.position.y}, {hitPose.position.z})!");
                }
            }
        }

        if (this.detectedSimilarWordsQueue.Count() > 0)
        {
            var detectedSimilarWord = this.detectedSimilarWordsQueue.Dequeue();
            Debug.Log($"similar word for {detectedSimilarWord.SimilarWords.word} has {detectedSimilarWord.SimilarWords.predictions.Count()} predictions");

            AllocateItem(detectedSimilarWord.SimilarWords.word, detectedSimilarWord.HitPose.position, detectedSimilarWord.HitPose.rotation);

            int i = 0;
            foreach (var prediction in detectedSimilarWord.SimilarWords.predictions)
            {
                Debug.Log($"{i} process {prediction.similar_word} with {prediction.similarity}");

                var hitPoseRandom = new Vector3(detectedSimilarWord.HitPose.position.x, detectedSimilarWord.HitPose.position.y, detectedSimilarWord.HitPose.position.z);

                float rX = UnityEngine.Random.Range(-2.0f, 2.0f);
                float rY = UnityEngine.Random.Range(-2.0f, 2.0f);
                float rZ = UnityEngine.Random.Range(-2.0f, 2.0f);
                hitPoseRandom.x += rX;
                hitPoseRandom.y += rY;
                hitPoseRandom.z += rZ;
                
                AllocateItem(prediction.similar_word, hitPoseRandom, detectedSimilarWord.HitPose.rotation);
            }
        }

        RequestSimilarWord();
    }


    private void AllocateItem(string word, Vector3 hitPose, Quaternion hitRotation)
    {
        Debug.Log($"allocate {word}");

        this.goText.GetComponent<TextMesh>().text = word;
        int colorIndex = UnityEngine.Random.Range(0, colors.Count());
        this.goText.GetComponent<TextMesh>().color = this.colors[colorIndex];

        int characterSize = UnityEngine.Random.Range(6, 18);
        this.goText.GetComponent<TextMesh>().characterSize = characterSize;

        Instantiate(goText, hitPose, hitRotation);
        Debug.Log($"allocated {word} on {hitPose.x}, {hitPose.y}, {hitPose.z}");
    }

    unsafe void OnCameraFrameReceived(ARCameraFrameEventArgs eventArgs)
    {
        if (!arCameraManager.TryAcquireLatestCpuImage(out XRCpuImage image))
        {
            return;
        }

        var conversionParams = new XRCpuImage.ConversionParams
        {
            inputRect = new RectInt(0, 0, image.width, image.height),
            outputDimensions = new Vector2Int(image.width, image.height),
            outputFormat = TextureFormat.RGBA32,
            transformation = XRCpuImage.Transformation.None
        };
        int imageSize = image.GetConvertedDataSize(conversionParams);
        var buffer = new NativeArray<byte>(imageSize, Allocator.Temp);
        image.Convert(conversionParams, new IntPtr(buffer.GetUnsafePtr()), buffer.Length);
        image.Dispose();

        this.m_Texture = new Texture2D(
            conversionParams.outputDimensions.x,
            conversionParams.outputDimensions.y,
            conversionParams.outputFormat,
            false
        );
        this.m_Texture.LoadRawTextureData(buffer);
        this.m_Texture.Apply();
        buffer.Dispose();

        Detect();
    }


    public void OnRefresh()
    {
        this.detectedQueue.Clear();
        this.detectionTargetQueue.Clear();
    }

    void OnDisable()
    {
        m_arCameraManager.frameReceived -= OnCameraFrameReceived;
    }


    private void CalculateShift()
    {
        int smallest;

        if (Screen.width < Screen.height)
        {
            smallest = Screen.width;
            this.shiftY = (Screen.height - smallest) / 2f;
        }
        else
        {
            smallest = Screen.height;
            this.shiftX = (Screen.width - smallest) / 2f;
        }

        this.scaleFactor = smallest / (float)this.objectDetector.IMAGE_SIZE;
    }

    private void RequestSimilarWord()
    {
        if (this.detectedQueue.Count()==0)
        {
            return;
        }

        var detected = this.detectedQueue.Dequeue();
        StartCoroutine(
            this.similarWordClient.SimilarWordAPI(
                detected.ItemsDetected[0].PredictedItem.Label, 20, results =>
                {
                    Debug.Log($"result {results}");
                    var detectedSimilarWords = new DetectedSimilarWords
                    {
                        HitPose = detected.HitPose,
                        SimilarWords=results,
                    };
                    this.detectedSimilarWordsQueue.Enqueue(detectedSimilarWords);
                }
            )
        );
    }

    private void Detect()
    {
        if (this.isDetecting)
        {
            return;
        }
        if (this.detectionTargetQueue.Count() == 0)
        {
            return;
        }

        var detectionTarget = this.detectionTargetQueue.Dequeue();
        this.isDetecting = true;
        StartCoroutine(
            ProcessImage(
                this.objectDetector.IMAGE_SIZE, detectionTarget.CurrentTexture2D, picture =>
                {
                    StartCoroutine(
                        this.objectDetector.Detect(
                            picture, itemsDetected =>
                            {
                                if (itemsDetected.Count > 0)
                                {
                                    var detected = new Detected
                                    {
                                        HitPose = detectionTarget.HitPose,
                                        ItemsDetected = itemsDetected,
                                    };
                                    this.detectedQueue.Enqueue(detected);
                                }
                                Resources.UnloadUnusedAssets();
                                this.isDetecting = false;
                            }
                        )
                    );
                }
            )
        );
    }


    private IEnumerator ProcessImage(int inputSize, Texture2D texture2D, Action<Color32[]> callback)
    {
        Coroutine croped = StartCoroutine(
            TextureTools.CropSquare(
                texture2D, TextureTools.RectOptions.Center, snap =>
                {
                    var scaled = Scale(snap, inputSize);
                    var rotated = Rotate(scaled.GetPixels32(), scaled.width, scaled.height);
                    callback(rotated);
                }
            )
        );
        yield return croped;
    }


    private Texture2D Scale(Texture2D texture, int imageSize)
    {
        Texture2D scaled = TextureTools.scaled(texture, imageSize, imageSize, FilterMode.Bilinear);
        return scaled;
    }


    private Color32[] Rotate(Color32[] pixels, int width, int height)
    {
        Color32[] rotate = TextureTools.RotateImageMatrix(pixels, width, height, 90);
        return rotate;
    }

}
