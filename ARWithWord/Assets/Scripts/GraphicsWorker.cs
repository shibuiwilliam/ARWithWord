using UnityEngine;
using System.Collections;
using Unity.Barracuda;

public class GraphicsWorker : MonoBehaviour
{

    public static IWorker GetWorker(Model model)
    {
        IWorker worker;
#if UNITY_IOS 
        Debug.Log("Graphics API: " + SystemInfo.graphicsDeviceType);
        if (SystemInfo.graphicsDeviceType == UnityEngine.Rendering.GraphicsDeviceType.Metal)
        {
            var workerType = WorkerFactory.Type.ComputePrecompiled;
            worker = WorkerFactory.CreateWorker(workerType, model);
        }
        else
        {
            var workerType = WorkerFactory.Type.CSharpBurst;
            worker = WorkerFactory.CreateWorker(workerType, model);
        }

#elif UNITY_ANDROID 
        Debug.Log("Graphics API: " + SystemInfo.graphicsDeviceType);
        if (SystemInfo.graphicsDeviceType == UnityEngine.Rendering.GraphicsDeviceType.Vulkan)
        {
            var workerType = WorkerFactory.Type.ComputePrecompiled; 
            worker = WorkerFactory.CreateWorker(workerType, model);
        }
        else
        {
            var workerType = WorkerFactory.Type.CSharpBurst;  
            worker = WorkerFactory.CreateWorker(workerType, model);
        }

#elif UNITY_WEBGL 
        Debug.Log("Graphics API: " + SystemInfo.graphicsDeviceType);
        var workerType = WorkerFactory.Type.CSharpBurst; 
        worker = WorkerFactory.CreateWorker(workerType, model);

#else 
        Debug.Log("Graphics API: " + SystemInfo.graphicsDeviceType);
        var workerType = WorkerFactory.Type.ComputePrecompiled;
        worker = WorkerFactory.CreateWorker(workerType, model);
#endif

        return worker;
    }
}