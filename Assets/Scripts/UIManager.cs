using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour {

	[SerializeField] private Text txtX;

	[SerializeField] private Text txtY;

	[SerializeField] private Text txtZ;

	[SerializeField] private LogSave log;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		this.txtX.text = Input.acceleration.x.ToString();	
		this.txtY.text = Input.acceleration.y.ToString();	
		this.txtZ.text = Input.acceleration.z.ToString();	
		log.logSave(this.txtX.text + "," + this.txtY.text + "," + this.txtZ.text);
	}
}
