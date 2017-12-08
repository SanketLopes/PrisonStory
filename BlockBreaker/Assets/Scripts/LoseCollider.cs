using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoseCollider : MonoBehaviour {

	public LevelManager levelManager;

	public void OnCollisionEnter2D(Collision2D collision2d){
		Debug.Log ("Collision");

	}

	void OnTriggerEnter2D(Collider2D collider2d){
		Debug.Log ("Trigger");
		levelManager.LoadLevel ("Won");
	}
}
