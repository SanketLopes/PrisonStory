using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Brick : MonoBehaviour {

	public int maxHits =1;
	private int timesHit = 0;

	private LevelManager levelManager;

	// Use this for initialization
	void Start () {
		levelManager = GameObject.FindObjectOfType<LevelManager> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}


	public void OnCollisionEnter2D(Collision2D collision2d){
		Debug.Log ("Collision : " + ++timesHit);
		SimulateWin ();
	}

	void OnTriggerEnter2D(Collider2D collider2d){
		Debug.Log ("Trigger");
	}

	void SimulateWin(){
		levelManager.LoadNextLevel ();
	}
}
	