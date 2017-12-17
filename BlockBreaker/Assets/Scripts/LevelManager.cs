using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class LevelManager : MonoBehaviour {

	public void LoadLevel(string level){
		Debug.Log ("Loading Level : " + level);
		if (level.Equals ("Game")) {
			SceneManager.LoadScene (1);
		} else if (level.Equals ("Start")) {
			SceneManager.LoadScene (0);
		} else if (level.Equals ("Won")) {
			SceneManager.LoadScene (3);
		} else if (level.Equals ("Lose")) {
			SceneManager.LoadScene (4);
		} else if (level.Equals ("Level_02")) {
			SceneManager.LoadScene (3);
		} 

	}

	public void QuitRequest(){
		Debug.Log ("Quit Requested");
		Application.Quit ();
	}

	public void LoadNextLevel(){
		SceneManager.LoadScene (SceneManager.GetActiveScene().buildIndex + 1);
	}
}
 