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
public class SimilarWords
{
    public string word;
    public SimilarWord[] predictions;

    public static SimilarWords Deserialize(string json)
    {
        SimilarWords model = JsonUtility.FromJson<SimilarWords>(json);
        return model;
    }
    public static string Serialize(SimilarWords model)
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

    public void Start()
    {
        this.secretString = Resources.Load<TextAsset>(this.secretFile.name).ToString();
        this.secretJson = SecretJson.Deserialize(this.secretString);
    }

    public IEnumerator SimilarWordAPI(string word, int topn, Action<SimilarWords> callback)
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

            if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.Log(request.error);
            }
            else
            {
                Debug.Log($"status code [{request.responseCode}]");
                if (request.responseCode==200)
                {
                    Debug.Log("POST request succeeded");
                    string json = request.downloadHandler.text;
                    SimilarWords similarWords = SimilarWords.Deserialize(json);
                    callback(similarWords);
                }
                else
                {
                    Debug.Log("POST request failed");
                }
            }
        }
    }

    public void Update()
    {
        
    }
}
