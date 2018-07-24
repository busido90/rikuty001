using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using LylekGames.RPGCharacter;

namespace LylekGames.RPGCharacter {
	public class ChangeCharacter : MonoBehaviour {

		public GameObject beardSlider;

		public void UpdateCharacter() {
			int sliderValue = (int)GetComponent<Slider>().value;
			switch (sliderValue) {
			case 0:
				CharacterProperties.characterProperties.characterType = CharacterProperties.CharacterType.Human;
				CharacterProperties.characterProperties.gender = CharacterProperties.GenderType.Male;
				beardSlider.SetActive (true);
				CharacterProperties.characterProperties.UpdateCharacterPath ();
				break;
			case 1:
				CharacterProperties.characterProperties.characterType = CharacterProperties.CharacterType.Human;
				CharacterProperties.characterProperties.gender = CharacterProperties.GenderType.Female;
				beardSlider.SetActive (false);
				CharacterProperties.characterProperties.UpdateCharacterPath ();
				break;
			case 2:
				CharacterProperties.characterProperties.characterType = CharacterProperties.CharacterType.Dwarf;
				CharacterProperties.characterProperties.gender = CharacterProperties.GenderType.Male;
				beardSlider.SetActive(true);
				CharacterProperties.characterProperties.UpdateCharacterPath();
				break;
			case 3:
				CharacterProperties.characterProperties.characterType = CharacterProperties.CharacterType.Dwarf;
				CharacterProperties.characterProperties.gender = CharacterProperties.GenderType.Female;
				beardSlider.SetActive(false);
				CharacterProperties.characterProperties.UpdateCharacterPath();
				break;
			case 4:
				CharacterProperties.characterProperties.characterType = CharacterProperties.CharacterType.Elf;
				CharacterProperties.characterProperties.gender = CharacterProperties.GenderType.Male;
				beardSlider.SetActive(true);
				CharacterProperties.characterProperties.UpdateCharacterPath();
				break;
			case 5:
				CharacterProperties.characterProperties.characterType = CharacterProperties.CharacterType.Elf;
				CharacterProperties.characterProperties.gender = CharacterProperties.GenderType.Female;
				beardSlider.SetActive (false);
				CharacterProperties.characterProperties.UpdateCharacterPath ();
				break;
			case 6:
				CharacterProperties.characterProperties.characterType = CharacterProperties.CharacterType.Goblin;
				CharacterProperties.characterProperties.gender = CharacterProperties.GenderType.Male;
				beardSlider.SetActive (true);
				CharacterProperties.characterProperties.UpdateCharacterPath ();
				break;
			case 7:
				CharacterProperties.characterProperties.characterType = CharacterProperties.CharacterType.Goblin;
				CharacterProperties.characterProperties.gender = CharacterProperties.GenderType.Female;
				beardSlider.SetActive (false);
				CharacterProperties.characterProperties.UpdateCharacterPath ();
				break;
			case 8:
				CharacterProperties.characterProperties.characterType = CharacterProperties.CharacterType.Orc;
				CharacterProperties.characterProperties.gender = CharacterProperties.GenderType.Male;
				beardSlider.SetActive(true);
				CharacterProperties.characterProperties.UpdateCharacterPath();
				break;
			case 9:
				CharacterProperties.characterProperties.characterType = CharacterProperties.CharacterType.Orc;
				CharacterProperties.characterProperties.gender = CharacterProperties.GenderType.Female;
				beardSlider.SetActive(false);
				CharacterProperties.characterProperties.UpdateCharacterPath();
				break;
			case 10:
				CharacterProperties.characterProperties.characterType = CharacterProperties.CharacterType.DarkElf;
				CharacterProperties.characterProperties.gender = CharacterProperties.GenderType.Male;
				beardSlider.SetActive(true);
				CharacterProperties.characterProperties.UpdateCharacterPath();
				break;
			case 11:
				CharacterProperties.characterProperties.characterType = CharacterProperties.CharacterType.DarkElf;
				CharacterProperties.characterProperties.gender = CharacterProperties.GenderType.Female;
				beardSlider.SetActive (false);
				CharacterProperties.characterProperties.UpdateCharacterPath ();
				break;
			default:
				CharacterProperties.characterProperties.characterType = CharacterProperties.CharacterType.Human;
				CharacterProperties.characterProperties.gender = CharacterProperties.GenderType.Male;
				beardSlider.SetActive (true);
				CharacterProperties.characterProperties.UpdateCharacterPath ();
				break;
			}
		}
	}
}
