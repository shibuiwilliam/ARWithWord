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
    RawImage m_RawImage;
    public RawImage rawImage
    {
        get { return m_RawImage; }
        set { m_RawImage = value; }
    }

    [SerializeField]
    GameObject m_goObjectDetector;
    public GameObject goObjectDetector
    {
        get { return m_goObjectDetector; }
        set { m_goObjectDetector = value; }
    }

    private ObjectDetector objectDetector;

    public float shiftX = 0f;
    public float shiftY = 0f;
    public float scaleFactor = 1;

    private ARRaycastManager arRaycastManager;
    private List<ARRaycastHit> hits = new List<ARRaycastHit>();

    public Color colorTag = new Color(0.3843137f, 0, 0.9333333f);
    private static Texture2D boxOutlineTexture;
    private IList<BoundingBox> boxOutlines;
    public List<BoundingBox> boxSavedOutlines = new List<BoundingBox>();

    private bool isDetectionNeeded = false;
    private bool isDetecting = false;
    public bool localization = false;

    Texture2D m_Texture;

    private void OnEnable()
    {
        Debug.Log("initialize AR camera manager frame received");
        m_arCameraManager.frameReceived += OnCameraFrameReceived;
    }

    void Start()
    {
        this.arRaycastManager = GetComponent<ARRaycastManager>();

        boxOutlineTexture = new Texture2D(1, 1);
        boxOutlineTexture.SetPixel(0, 0, this.colorTag);
        boxOutlineTexture.Apply();


        this.objectDetector = goObjectDetector.GetComponent<TinyYolo3Detector>();
        this.objectDetector.Start();

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
                    Debug.Log($"touched ({hitPose.position.x},{hitPose.position.y},{hitPose.position.z})!");
                    this.isDetectionNeeded = true;
                    //Detect();
                    if (this.boxOutlines.Count > 0)
                    {
                        //this.goText.text = this.boxOutlines[0].ToString();
                        this.goText.GetComponent<TextMesh>().text = this.boxOutlines[0].ToString();
                        Debug.Log($"allocate detected item {this.boxOutlines[0]}");

                        Instantiate(goText, hitPose.position, hitPose.rotation);
                        this.boxOutlines.Clear();
                        this.isDetectionNeeded = false;
                        Debug.Log("allocated!!!");
                    }
                }
            }
        }

        if (this.boxOutlines.Count > 0)
        {
            int i = 0;
            foreach (var outline in this.boxOutlines)
            {
                Debug.Log($"{i} detected bounding box {outline.ToString()}");
                i++;

                float x = outline.Dimensions.X * this.scaleFactor + this.shiftX;
                float y = outline.Dimensions.Y * this.scaleFactor + this.shiftY;
                Debug.Log($"{i} detected position {x}:{y}");
                this.isDetectionNeeded = false;
            }
        }
    }

    unsafe void OnCameraFrameReceived(ARCameraFrameEventArgs eventArgs)
    {
        if (!this.isDetectionNeeded)
        {
            return;
        }

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
        localization = false;
        staticNum = 0;
        boxSavedOutlines.Clear();
        boxOutlines.Clear();
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

    private void Detect()
    {
        if (this.isDetecting)
        {
            return;
        }
        if (!this.isDetectionNeeded)
        {
            return;
        }

        this.isDetecting = true;
        StartCoroutine(
            ProcessImage(
                this.objectDetector.IMAGE_SIZE, result =>
                {
                    StartCoroutine(
                        this.objectDetector.Detect(
                            result, boxes =>
                            {
                                this.boxOutlines = boxes;
                                Resources.UnloadUnusedAssets();
                                this.isDetecting = false;
                            }
                        )
                    );
                }
            )
        );
    }


    private IEnumerator ProcessImage(int inputSize, Action<Color32[]> callback)
    {
        Coroutine croped = StartCoroutine(
            TextureTools.CropSquare(
                m_Texture, TextureTools.RectOptions.Center, snap =>
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
