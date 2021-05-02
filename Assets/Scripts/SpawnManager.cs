using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;

using Unity.Collections.LowLevel.Unsafe;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Unity.Barracuda;

public class SpawnManager : MonoBehaviour
{
    [SerializeField] GameObject text;

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
    private static GUIStyle labelStyle;
    private static Texture2D boxOutlineTexture;
    private IList<BoundingBox> boxOutlines;
    public List<BoundingBox> boxSavedOutlines = new List<BoundingBox>();
    private bool isDetecting = false;
    private int staticNum = 0;
    public bool localization = false;

    Texture2D m_Texture;

    void Start()
    {
        arRaycastManager = GetComponent<ARRaycastManager>();

        if (m_arCameraManager != null)
        {
            Debug.Log("initialize AR camera manager frame received");
            m_arCameraManager.frameReceived += OnCameraFrameReceived;
        }

        boxOutlineTexture = new Texture2D(1, 1);
        boxOutlineTexture.SetPixel(0, 0, this.colorTag);
        boxOutlineTexture.Apply();

        labelStyle = new GUIStyle();
        labelStyle.fontSize = 50;
        labelStyle.normal.textColor = this.colorTag;

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
                    Debug.Log("touched!");
                    Pose hitPose = hits[0].pose;
                    Instantiate(text, hitPose.position, hitPose.rotation);
                }
            }
        }
    }

    unsafe void OnCameraFrameReceived(ARCameraFrameEventArgs eventArgs)
    {
        XRCpuImage xRCpuImage;
        if (!arCameraManager.TryAcquireLatestCpuImage(out xRCpuImage))
        {
            return;
        }

        TextureFormat format = TextureFormat.RGBA32;
        if (m_Texture==null || m_Texture.width != xRCpuImage.width || m_Texture.height!=xRCpuImage.height)
        {
            m_Texture = new Texture2D(xRCpuImage.width, xRCpuImage.height, format, false);
        }

        XRCpuImage.ConversionParams conversionParams = new XRCpuImage.ConversionParams(xRCpuImage, format, XRCpuImage.Transformation.None);
        var rawTextureData = m_Texture.GetRawTextureData<byte>();
        try
        {
            xRCpuImage.Convert(conversionParams, new IntPtr(rawTextureData.GetUnsafePtr()), rawTextureData.Length);
        }
        finally
        {
            xRCpuImage.Dispose();
        }

        m_Texture.Apply();
        if (staticNum > 150)
        {
            localization = true;
        }
        else
        {
            Detect();
            GroupBoxOutlines();
        }

        m_RawImage.texture = m_Texture;
    }

    public void OnGUI()
    {
        if (this.boxSavedOutlines != null && this.boxSavedOutlines.Any())
        {
            foreach (var outline in this.boxSavedOutlines)
            {
                Debug.Log("detected to draw box.");
                DrawBoxOutline(outline);
            }
        }
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
        if (m_arCameraManager != null)
        {
            m_arCameraManager.frameReceived -= OnCameraFrameReceived;
        }
    }


    private void GroupBoxOutlines()
    {
        if (this.boxSavedOutlines.Count == 0)
        {
            if (this.boxOutlines == null || this.boxOutlines.Count == 0)
            {
                return;
            }
            foreach (var outline in this.boxOutlines)
            {
                this.boxSavedOutlines.Add(outline);
            }
            return;
        }

        bool addOutline = false;
        foreach (var outline1 in this.boxOutlines)
        {
            bool unique = true;
            List<BoundingBox> itemsToAdd = new List<BoundingBox>();
            List<BoundingBox> itemsToRemove = new List<BoundingBox>();
            foreach (var outline2 in this.boxSavedOutlines)
            {
                if (IsSameObject(outline1, outline2))
                {
                    unique = false;
                    if (outline1.Confidence > outline2.Confidence + 0.05F)
                    {
                        Debug.Log("DEBUG: add detected boxes in this frame.");
                        Debug.Log($"DEBUG: Add Label: {outline1.Label}. Confidence: {outline1.Confidence}.");
                        Debug.Log($"DEBUG: Remove Label: {outline2.Label}. Confidence: {outline2.Confidence}.");

                        itemsToRemove.Add(outline2);
                        itemsToAdd.Add(outline1);
                        addOutline = true;
                        staticNum = 0;
                        break;
                    }
                }
            }
            this.boxSavedOutlines.RemoveAll(item => itemsToRemove.Contains(item));
            this.boxSavedOutlines.AddRange(itemsToAdd);

            if (unique)
            {
                Debug.Log($"DEBUG: add detected boxes in this frame");
                addOutline = true;
                staticNum = 0;
                this.boxSavedOutlines.Add(outline1);
                Debug.Log($"Add Label: {outline1.Label}. Confidence: {outline1.Confidence}.");
            }
        }
        if (!addOutline)
        {
            staticNum += 1;
        }

        List<BoundingBox> temp = new List<BoundingBox>();
        foreach (var outline1 in this.boxSavedOutlines)
        {
            if (temp.Count == 0)
            {
                temp.Add(outline1);
                continue;
            }

            List<BoundingBox> itemsToAdd = new List<BoundingBox>();
            List<BoundingBox> itemsToRemove = new List<BoundingBox>();
            foreach (var outline2 in temp)
            {
                if (IsSameObject(outline1, outline2))
                {
                    if (outline1.Confidence > outline2.Confidence)
                    {
                        itemsToRemove.Add(outline2);
                        itemsToAdd.Add(outline1);
                        Debug.Log("DEBUG: merge bounding box conflict!!!");
                    }
                }
                else
                {
                    itemsToAdd.Add(outline1);
                }
            }
            temp.RemoveAll(item => itemsToRemove.Contains(item));
            temp.AddRange(itemsToAdd);
        }
        this.boxSavedOutlines = temp;
    }

    private bool IsSameObject(BoundingBox outline1, BoundingBox outline2)
    {
        var xMin1 = outline1.Dimensions.X * this.scaleFactor + this.shiftX;
        var width1 = outline1.Dimensions.Width * this.scaleFactor;
        var yMin1 = outline1.Dimensions.Y * this.scaleFactor + this.shiftY;
        var height1 = outline1.Dimensions.Height * this.scaleFactor;
        float center_x1 = xMin1 + width1 / 2f;
        float center_y1 = yMin1 + height1 / 2f;

        var xMin2 = outline2.Dimensions.X * this.scaleFactor + this.shiftX;
        var width2 = outline2.Dimensions.Width * this.scaleFactor;
        var yMin2 = outline2.Dimensions.Y * this.scaleFactor + this.shiftY;
        var height2 = outline2.Dimensions.Height * this.scaleFactor;
        float center_x2 = xMin2 + width2 / 2f;
        float center_y2 = yMin2 + height2 / 2f;

        bool cover_x = (xMin2 < center_x1) && (center_x1 < (xMin2 + width2));
        bool cover_y = (yMin2 < center_y1) && (center_y1 < (yMin2 + height2));
        bool contain_x = (xMin1 < center_x2) && (center_x2 < (xMin1 + width1));
        bool contain_y = (yMin1 < center_y2) && (center_y2 < (yMin1 + height1));

        return (cover_x && cover_y) || (contain_x && contain_y);
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


    private IEnumerator ProcessImage(int inputSize, System.Action<Color32[]> callback)
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


    private void DrawBoxOutline(BoundingBox outline)
    {
        var x = outline.Dimensions.X * this.scaleFactor + this.shiftX;
        var width = outline.Dimensions.Width * this.scaleFactor;
        var y = outline.Dimensions.Y * this.scaleFactor + this.shiftY;
        var height = outline.Dimensions.Height * this.scaleFactor;

        DrawRectangle(new Rect(x, y, width, height), 10, this.colorTag);
        string message = $"Localizing {outline.Label}: {(int)(outline.Confidence * 100)}%";
        Debug.Log(message);
        DrawLabel(new Rect(x, y - 80, 200, 20), message);
    }


    public static void DrawRectangle(Rect area, int frameWidth, Color color)
    {
        Rect lineArea = area;
        lineArea.height = frameWidth;
        GUI.DrawTexture(lineArea, boxOutlineTexture);

        lineArea.y = area.yMax - frameWidth;
        GUI.DrawTexture(lineArea, boxOutlineTexture);

        lineArea = area;
        lineArea.width = frameWidth;
        GUI.DrawTexture(lineArea, boxOutlineTexture);

        lineArea.x = area.xMax - frameWidth;
        GUI.DrawTexture(lineArea, boxOutlineTexture);
    }


    private static void DrawLabel(Rect position, string text)
    {
        GUI.Label(position, text, labelStyle);
    }

    private Texture2D Scale(Texture2D texture, int imageSize)
    {
        var scaled = TextureTools.scaled(texture, imageSize, imageSize, FilterMode.Bilinear);
        return scaled;
    }


    private Color32[] Rotate(Color32[] pixels, int width, int height)
    {
        var rotate = TextureTools.RotateImageMatrix(pixels, width, height, 90);
        return rotate;
    }
}
