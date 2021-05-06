using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextController : MonoBehaviour
{
    void Start()
    {
        
    }

    void Update()
    {
        this.transform.rotation = Quaternion.LookRotation(this.transform.position - Camera.main.transform.position);
    }
}
