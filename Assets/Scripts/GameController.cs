using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : UtilComponent {

	public Force force;

	public CountDownComponent cdCarib;
	public CountDownComponent cdCountDown;


	public enum STATUS_ENUM : int{
		NON,
		OPEN,
		CARIB,
		PREPARE,
		COUNT,
		PLAY
	}
	private STATUS_ENUM currentStatus = STATUS_ENUM.NON;

	[SerializeField] GameObject objOpen;
	[SerializeField] GameObject objCarib;
	[SerializeField] GameObject objPrepare;
	[SerializeField] GameObject objCount;

	// Use this for initialization
	void Start () {
		SetActive(this.objOpen, true);
		SetActive(this.objCarib, false);
		SetActive(this.objPrepare, false);
		SetActive(this.objCount, false);
		this.currentStatus = STATUS_ENUM.OPEN;	
//		this.ClickSetButton();
	}
	
	// Update is called once per frame
	void Update () {
		switch(this.currentStatus){
		case STATUS_ENUM.OPEN:
			this.UpdateOpen();
			break;
		case STATUS_ENUM.CARIB:
			this.UpdateCarib();
			break;
		case STATUS_ENUM.PREPARE:
			this.UpdatePrepare();
			break;
		case STATUS_ENUM.COUNT:
			this.UpdateCount();
			break;
		case STATUS_ENUM.PLAY:
			this.UpdatePlay();
			break;

		}
	}
		

	private void UpdateOpen(){
	}

	public void ClickSetButton(){
		this.currentStatus = STATUS_ENUM.CARIB;
		SetActive(this.objOpen, false);
		SetActive(this.objCarib, true);
		this.cdCarib.Initialize(10f, 
			()=>{
				Debug.Log("aaaaa");
				this.currentStatus = STATUS_ENUM.PREPARE;
				SetActive(this.objCarib, false);
				SetActive(this.objPrepare, true);
			},
			false);
	}

	private void UpdateCarib(){
		
	}

	private void UpdatePrepare(){
	}

	public void ClickStartButton(){
		this.currentStatus = STATUS_ENUM.COUNT;
		SetActive(this.objPrepare, false);
		SetActive(this.objCount, true);
	}

	private void UpdateCount(){
		this.cdCountDown.Initialize(3f, ()=>{
			this.currentStatus = STATUS_ENUM.PLAY;
		},
		true);

	}

	private void UpdatePlay(){
		this.force.isStart = true;
	}


}
