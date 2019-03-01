using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Control : MonoBehaviour {

    private Rigidbody rigid;
    private float speed = 7.0f;



	// Use this for initialization
	private void Start () {

        rigid = GetComponent<Rigidbody>();
		
	}
	
	// Update is called once per frame
	private void Update () {

        transform.Translate(Input.acceleration.x, 0, 0);
        transform.Rotate(0, 0, 0);
        rigid.AddForce(transform.forward * speed, ForceMode.Acceleration);

	}
}

