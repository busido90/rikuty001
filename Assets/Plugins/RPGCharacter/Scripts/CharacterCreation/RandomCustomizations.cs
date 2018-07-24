using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LylekGames.RPGCharacter;

namespace LylekGames.RPGCharacter {
	public class RandomCustomizations : MonoBehaviour {

		public GameObject[] sliders;	//assign our slider bars in editor
		public GameObject[] hairColors;	//assign our hairColor buttons in editor
		public GameObject[] eyeColors;	//assign our eyeColor buttons in editor
		public GameObject[] skinTones;	//assign our skinTone buttons in editor

		void Start() {
			StartCoroutine(RandomizeALL());
		}
		//Randomize ALL customizations
		public IEnumerator RandomizeALL() {
			yield return new WaitForSeconds (0.01f);
			RandomizeAppearance();
			RandomizeHairColor();
			RandomizeEyeColor();
			RandomizeSkinTone();
		}
		//If you want, you may create additional randomize buttons
		//and call the functions bellow, separately.
		public void RandomizeAppearance() {
			foreach(GameObject slider in sliders) {
				if(slider.activeSelf) {
					slider.SendMessage("RandomizeValue");
				}
			}
		}
		public void RandomizeHairColor() {
			//choose a random hair color option
			var randomHairColor = Random.Range(0, hairColors.Length);
			//apply it's hair color
			hairColors[randomHairColor].SendMessage("ApplyHairColor");
		}
		public void RandomizeEyeColor() {
			//choose a random eye color option
			var randomEyeColor = Random.Range(0, eyeColors.Length);
			//apply it's eye color
			eyeColors[randomEyeColor].SendMessage("ApplyEyeColor");
		}
		public void RandomizeSkinTone() {
			//choose a random skin color option
			var randomSkinTone = Random.Range(0, skinTones.Length);

			//apply it's skin color
			skinTones[randomSkinTone].SendMessage("ApplySkinTone");
		}

		public void UpdateAllCustomizations() {
			//Recalcualate armors and hair meshes
			foreach(GameObject slider in sliders) {
				if(slider.activeSelf) {
					slider.SendMessage("RecalculateArmors");
				}
			}
			//Reassign color values
			//skinTone
			CharacterProperties.characterProperties.skinTone.SendMessage("ApplySkinTone");
			//eyeColor
			CharacterProperties.characterProperties.eyes.GetComponent<Renderer>().sharedMaterial = CharacterProperties.characterProperties.eyeColor;
			//hairColor
			if(CharacterProperties.characterProperties.hair) {
				CharacterProperties.characterProperties.hair.GetComponent<Renderer>().sharedMaterial = CharacterProperties.characterProperties.hairColor;
			}
			if(CharacterProperties.characterProperties.beard) {
				CharacterProperties.characterProperties.beard.GetComponent<Renderer>().sharedMaterial = CharacterProperties.characterProperties.hairColor;
			}
		}
	}
}
