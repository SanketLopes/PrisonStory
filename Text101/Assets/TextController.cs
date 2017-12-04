using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TextController : MonoBehaviour {

	public Text text;
	private enum States {cell,mirror,sheet_0,lock_0,sheet_1,lock_1, cell_mirror, 
		corridoor_0,stairs_0, floor, corridoor_1, stairs_1,in_closet, freedom};
	private States myState;


	// Use this for initialization
	void Start () {
		myState = States.cell;
		text.text = "Press Space to Continue";
	}
	
	// Update is called once per frame
	void Update () {
		if (myState == States.cell) {
			state_cell();
		} else if (myState == States.lock_0 ) {
			state_lock0();
		} else if (myState == States.mirror) {
			state_mirror();
		}else if (myState == States.sheet_0) {
			state_sheet0();
		}else if (myState == States.cell_mirror) {
			state_cell_mirror();
		}else if (myState == States.lock_1) {
			state_lock1();
		}else if (myState == States.sheet_1) {
			state_sheet1();
		}else if (myState == States.freedom) {
			state_freedom();
		}
	}

	private void state_cell(){
			text.text = "You are in a prison cell which is locked from out side. " +
				"There are few things in the cell that can be used to escape the cell. " +
				"The goal is to get out of the cell by using things that are available" +
				"There is Bed, Sink, Mirror \n\n" +
				"Press S to view Sheet, M to view Mirror, L to view Lock";
		if (Input.GetKeyDown (KeyCode.S)) {
			myState = States.sheet_0;
		} else if (Input.GetKeyDown (KeyCode.L)) {
			myState = States.lock_0;
		} else if (Input.GetKeyDown (KeyCode.M)) {
			myState = States.mirror;
		}
	}

	private void state_cell_mirror(){
		text.text = "You are still in a prison cell which is locked from out side. " +
			" \n\n" +
				"Press S to view Sheet, D to drop Mirror, L to view Lock";
		if (Input.GetKeyDown (KeyCode.S)) {
			myState = States.sheet_1;
		} else if (Input.GetKeyDown (KeyCode.L)) {
			myState = States.lock_1;
		} else if (Input.GetKeyDown (KeyCode.D)) {
			myState = States.cell;
		}
	}

	private void state_sheet0(){
		text.text = "These are some dirty sheets that probably needs a wash. " +
			"You dont want to sleep on the bed with dirty sheet. \n\n" +
				"Press R to return to Cell";
		if (Input.GetKeyDown (KeyCode.R)) {
			myState = States.cell;
		}
	}

	private void state_lock0(){
		text.text = "This is a lock, with some dirty finger prints on some buttons . \n\n" +
				"Press R to return to Cell";
		if (Input.GetKeyDown (KeyCode.R)) {
			myState = States.cell;
		}
	}

	private void state_sheet1(){
		text.text = "The sheet is still dirty, it probably needs a wash. " +
			"You dont want to sleep on the bed with dirty sheet. \n\n" +
				"Press R to return to Cell";
		if (Input.GetKeyDown (KeyCode.R)) {
			myState = States.cell_mirror;
		}
	}
	
	private void state_lock1(){
		text.text = "This lock can be cleary viewed using the mirror. " +
			"Slide the throught the bars and view the lock to pick it \n\n" +
			"Press O to open R to return to Cell";
		if (Input.GetKeyDown (KeyCode.R)) {
			myState = States.cell_mirror;
		} else if (Input.GetKeyDown (KeyCode.O)) {
			myState = States.freedom;
		}
	}

	private void state_mirror(){
		text.text = "The Mirror on the wall is loose enough to be used. \n\n" +
			"Press T to Take, R to return to Cell";
		if (Input.GetKeyDown (KeyCode.R)) {
			myState = States.cell;
		}
		else if (Input.GetKeyDown (KeyCode.T)) {
			myState = States.cell_mirror;
		}
	}

	private void state_freedom(){
		text.text = "You made it!. \n\n" +
			"Press space to play again";
		if (Input.GetKeyDown (KeyCode.Space)) {
			myState = States.cell;
		}
	
	}

}
