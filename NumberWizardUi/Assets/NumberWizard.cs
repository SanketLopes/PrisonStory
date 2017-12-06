using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class NumberWizard : MonoBehaviour {

	int max;
	int min;
	int guessInt;
	bool newGame;
	bool finish;

	public Text tvGuess;
	public Text tvChallange;

	int MaxGuessAllowed = 10;

	// Use this for initialization
	void Start () {
		StartGame();
	}

	void StartGame(){
		max = 1000;
		min = 1;
		tvChallange.text = "Think of a number between " + min + " and " + max + " and I will guess it in under "+ MaxGuessAllowed +" attempts \n\n I dare you to beat me!";

		guessInt = Random.Range(min,max);
		tvGuess.text = guessInt + "?";

		newGame = true;
		finish = false;

	}

	public void guessHigher(){
		min = guessInt;
		NextGuess ();
	}

	public void guessLower(){
		max = guessInt;
		NextGuess ();
	}

	public void ThatsIt(){
		newGame = false;
		SceneManager.LoadScene (3);//win
	}
		
	void NextGuess(){
		
		guessInt = Random.Range (min, max+1);

		if (MaxGuessAllowed-- > 0) {
			tvGuess.text = guessInt + "?";
		} else {
			SceneManager.LoadScene (2);//win
		}
	}
}
