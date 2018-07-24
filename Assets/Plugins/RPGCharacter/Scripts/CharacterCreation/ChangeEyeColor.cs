using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LylekGames.RPGCharacter;

namespace LylekGames.RPGCharacter {
	public class ChangeEyeColor : MonoBehaviour {

		public Material eyeColor;

		public void ApplyEyeColor() {
			CharacterProperties.characterProperties.eyeColor = eyeColor;
			CharacterProperties.characterProperties.eyes.GetComponent<Renderer>().sharedMaterial = eyeColor;
		}
	}
}
