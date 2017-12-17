using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Paddle : MonoBehaviour {

	float mousePosInblocks;
	Vector3 paddlePos = new Vector3 (8.0f, 0.5f, 0);

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		mousePosInblocks = Input.mousePosition.x / Screen.width * 16;
		//print (mousePosInblocks);
		paddlePos.x = Mathf.Clamp(mousePosInblocks, 0.5f, 15.5f);
		this.transform.position = paddlePos;

	}
}
