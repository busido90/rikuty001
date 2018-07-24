using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using LylekGames.RPGCharacter;

namespace LylekGames.RPGCharacter {
	public class ChangeHairColor : MonoBehaviour {

		public Material hairColor;

		public void ApplyHairColor() {
			CharacterProperties.characterProperties.hairColor = hairColor;
			if(CharacterProperties.characterProperties.hair) {
				CharacterProperties.characterProperties.hair.GetComponent<Renderer>().sharedMaterial = CharacterProperties.characterProperties.hairColor;
			}
			if(CharacterProperties.characterProperties.beard) {
				CharacterProperties.characterProperties.beard.GetComponent<Renderer>().sharedMaterial = CharacterProperties.characterProperties.hairColor;
			}
		}
	}
}
