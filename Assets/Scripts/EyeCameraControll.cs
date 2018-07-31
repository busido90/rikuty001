using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EyeCameraControll : MonoBehaviour {


    //settings
    public float ForwardSpeed = 0.01f;

    //objects
    //private Controller Controller_ = new Controller();
    private Transform camera;

    void Start()
    {
        camera = transform.FindChild("Camera");
    }

    void Update()
    {
        //camera position
        transform.position += camera.forward * ForwardSpeed;


    }
}
