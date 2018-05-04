using UnityEngine;
using WhiteCat.Paths;

[RequireComponent(typeof(MoveAlongPathWithSpeed))]
public class LoopMoveAlongPath : MonoBehaviour {

	[SerializeField]
	private MoveAlongPathWithSpeed move;
		
	void LateUpdate()
	{
		if (move.distance >= move.path.length) {
			move.distance = 0f;
		}
	}
}
