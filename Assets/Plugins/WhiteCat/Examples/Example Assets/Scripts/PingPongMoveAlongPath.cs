using UnityEngine;
using WhiteCat.Paths;

[RequireComponent(typeof(MoveAlongPathWithSpeed))]
public class PingPongMoveAlongPath : MonoBehaviour
{
	MoveAlongPathWithSpeed move;


	void Awake()
	{
		move = GetComponent<MoveAlongPathWithSpeed>();
	}


	void LateUpdate()
	{
		if (move.distance <= 0f)
		{
			move.speed = -move.speed;
		}
		else if (move.distance >= move.path.length)
		{
			move.speed = -move.speed;
		}
	}
}