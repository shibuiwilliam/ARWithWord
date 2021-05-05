using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class SecretJson
{
    public string url;
    public string secret;
}

[Serializable]
public class PostData
{
    public string word;
    public int topn;
}

[Serializable]
public class SimilarWord
{
    public string similar_word;
    public float similarity;
}

[Serializable]
public class Predictions
{
    public SimilarWord[] predictions;
}


public class SimilarWordClient : MonoBehaviour
{
    public TextAsset secretFile;
    private string secretString;
    private SecretJson secretJson;

    void Start()
    {
        this.secretString = Resources.Load<TextAsset>(this.secretFile.name).ToString();
        this.secretJson = JsonUtility.FromJson<SecretJson>(this.secretString);
    }

    private void Update()
    {
        
    }
}
