using System;
using UnityEngine;
using Unity.Barracuda;
using System.Collections;
using System.Collections.Generic;

public interface ObjectDetector
{
    int IMAGE_SIZE
    {
        get;
    }

    void Start();
    IEnumerator Detect(Color32[] picture, System.Action<IList<BoundingBox>> callback);

}

public class DimensionsBase
{
    public float X
    {
        get;
        set;
    }
    public float Y
    {
        get;
        set;
    }
    public float Height
    {
        get;
        set;
    }
    public float Width
    {
        get;
        set;
    }
}


public class BoundingBoxDimensions : DimensionsBase { }

public class CellDimensions : DimensionsBase { }


public class BoundingBox
{
    public BoundingBoxDimensions Dimensions
    {
        get;
        set;
    }

    public string Label
    {
        get;
        set;
    }

    public float Confidence
    {
        get;
        set;
    }

    public bool Used
    {
        get;
        set;
    }

    public Rect Rect
    {
        get { return new Rect(Dimensions.X, Dimensions.Y, Dimensions.Width, Dimensions.Height); }
    }

    public override string ToString()
    {
        string prediction = $"{Label}:{Confidence}, X:Y=({Dimensions.X}:{Dimensions.Y}) W:H=({Dimensions.Width}:{Dimensions.Height})";
        return prediction;
    }
}
