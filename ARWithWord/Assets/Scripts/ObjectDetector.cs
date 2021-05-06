using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public interface ObjectDetector
{
    int IMAGE_SIZE
    {
        get;
    }

    void Start();
    IEnumerator Detect(Color32[] picture, Action<IList<ItemDetected>> callback);

}


public class Prediction
{
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
}

public class XY
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
}

public class ItemDetected
{
    //public XY CenterPoint
    //{
    //    get;
    //    set;
    //}

    public Prediction PredictedItem
    {
        get;
        set;
    }

    public override string ToString()
    {
        string predictions = $"{this.PredictedItem.Label}: {this.PredictedItem.Confidence}";
        return predictions;
    }

}
