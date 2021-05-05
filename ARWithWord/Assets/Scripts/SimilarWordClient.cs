using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

[Serializable]
public class SecretJson
{
    public string url;
    public string secret;

    public static SecretJson Deserialize(string json)
    {
        SecretJson model = JsonUtility.FromJson<SecretJson>(json);
        return model;
    }
    public static string Serialize(SecretJson model)
    {
        string json = JsonUtility.ToJson(model);
        return json;
    }
}

[Serializable]
public class PostData
{
    public string word;
    public int topn;

    public static PostData Deserialize(string json)
    {
        PostData model = JsonUtility.FromJson<PostData>(json);
        return model;
    }
    public static string Serialize(PostData model)
    {
        string json = JsonUtility.ToJson(model);
        return json;
    }
}

[Serializable]
public class SimilarWord
{
    public string similar_word;
    public float similarity;

    public static SimilarWord Deserialize(string json)
    {
        SimilarWord model = JsonUtility.FromJson<SimilarWord>(json);
        return model;
    }
    public static string Serialize(SimilarWord model)
    {
        string json = JsonUtility.ToJson(model);
        return json;
    }
}

[Serializable]
public class Predictions
{
    public SimilarWord[] predictions;

    public static Predictions Deserialize(string json)
    {
        Predictions model = JsonUtility.FromJson<Predictions>(json);
        return model;
    }
    public static string Serialize(Predictions model)
    {
        string json = JsonUtility.ToJson(model);
        return json;
    }
}


public class SimilarWordClient : MonoBehaviour
{
    public TextAsset secretFile;
    private string secretString;
    private SecretJson secretJson;

    void Start()
    {
        this.secretString = Resources.Load<TextAsset>(this.secretFile.name).ToString();
        this.secretJson = SecretJson.Deserialize(this.secretString);
    }

    IEnumerator SimilarWordAPI(string word, int topn)
    {
        using (var request = new UnityWebRequest(secretJson.url, "POST"))
        {
            PostData postData = new PostData();
            postData.word = word;
            postData.topn = topn;
            string postJson = PostData.Serialize(postData);
            byte[] byteData = System.Text.Encoding.UTF8.GetBytes(postJson);

            request.uploadHandler = (UploadHandler)new UploadHandlerRaw(byteData);
            request.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
            request.SetRequestHeader("accept", "application/json");
            request.SetRequestHeader("Content-Type", "application/json");
            request.SetRequestHeader("X-API-KEY", secretJson.secret);
            yield return request.SendWebRequest();
        }
    }

    private void Update()
    {
        
    }
}
