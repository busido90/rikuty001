using UnityEngine;
using System.Collections;
using WhiteCat.Paths;

public class MoveAlongPathOffset : MonoBehaviour {

	[SerializeField, Range (-0.01f, 0.01f)]
	private float offset;

	// Update is called once per frame
	void LateUpdate () 
	{
		this.transform.localPosition = this.transform.parent.localPosition * this.offset;
	}
}
