using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LylekGames.RPGCharacter;

namespace LylekGames.RPGCharacter {
	public class ChangeSkinTone : MonoBehaviour {

		[Header("Allies")]
		public Material[] dwarfFemaleSkinTone; //head, chest, legs, hands, feet
		public Material[] dwarfMaleSkinTone;
		public Material[] elfFemaleSkinTone;
		public Material[] elfMaleSkinTone;
		public Material[] humanFemaleSkinTone;
		public Material[] humanMaleSkinTone;

		[Header("Enemies")]
		public Material[] goblinMaleSkinTone; //head, chest, legs, hands, feet
		public Material[] goblinFemaleSkinTone;

		public void ApplySkinTone() {
			CharacterProperties.characterProperties.skinTone = gameObject;
			switch (CharacterProperties.characterProperties.gender) {
			case CharacterProperties.GenderType.Male:
				switch (CharacterProperties.characterProperties.characterType) {
				case CharacterProperties.CharacterType.Human:
					CharacterProperties.characterProperties.headMaterial = humanMaleSkinTone [0];
					CharacterProperties.characterProperties.chestMaterial = humanMaleSkinTone [1];
					CharacterProperties.characterProperties.legMaterial = humanMaleSkinTone [2];
					CharacterProperties.characterProperties.handMaterial = humanMaleSkinTone [3];
					CharacterProperties.characterProperties.feetMaterial = humanMaleSkinTone [4];
					break;
				case CharacterProperties.CharacterType.Dwarf:
					CharacterProperties.characterProperties.headMaterial = dwarfMaleSkinTone [0];
					CharacterProperties.characterProperties.chestMaterial = dwarfMaleSkinTone [1];
					CharacterProperties.characterProperties.legMaterial = dwarfMaleSkinTone [2];
					CharacterProperties.characterProperties.handMaterial = dwarfMaleSkinTone [3];
					CharacterProperties.characterProperties.feetMaterial = dwarfMaleSkinTone [4];
					break;
				case CharacterProperties.CharacterType.Elf:
					CharacterProperties.characterProperties.headMaterial = elfMaleSkinTone [0];
					CharacterProperties.characterProperties.chestMaterial = elfMaleSkinTone [1];
					CharacterProperties.characterProperties.legMaterial = elfMaleSkinTone [2];
					CharacterProperties.characterProperties.handMaterial = elfMaleSkinTone [3];
					CharacterProperties.characterProperties.feetMaterial = elfMaleSkinTone [4];
					break;
				case CharacterProperties.CharacterType.Goblin:
					CharacterProperties.characterProperties.headMaterial = goblinMaleSkinTone [0];
					CharacterProperties.characterProperties.chestMaterial = goblinMaleSkinTone [1];
					CharacterProperties.characterProperties.legMaterial = goblinMaleSkinTone [2];
					CharacterProperties.characterProperties.handMaterial = goblinMaleSkinTone [3];
					CharacterProperties.characterProperties.feetMaterial = goblinMaleSkinTone [4];
					break;
				default:
					CharacterProperties.characterProperties.headMaterial = humanMaleSkinTone [0];
					CharacterProperties.characterProperties.chestMaterial = humanMaleSkinTone [1];
					CharacterProperties.characterProperties.legMaterial = humanMaleSkinTone [2];
					CharacterProperties.characterProperties.handMaterial = humanMaleSkinTone [3];
					CharacterProperties.characterProperties.feetMaterial = humanMaleSkinTone [4];
					break;
				}
				break;
			case CharacterProperties.GenderType.Female:
				switch (CharacterProperties.characterProperties.characterType) {
				case CharacterProperties.CharacterType.Human:
					CharacterProperties.characterProperties.headMaterial = humanFemaleSkinTone [0];
					CharacterProperties.characterProperties.chestMaterial = humanFemaleSkinTone [1];
					CharacterProperties.characterProperties.legMaterial = humanFemaleSkinTone [2];
					CharacterProperties.characterProperties.handMaterial = humanFemaleSkinTone [3];
					CharacterProperties.characterProperties.feetMaterial = humanFemaleSkinTone [4];
					break;
				case CharacterProperties.CharacterType.Dwarf:
					CharacterProperties.characterProperties.headMaterial = dwarfFemaleSkinTone [0];
					CharacterProperties.characterProperties.chestMaterial = dwarfFemaleSkinTone [1];
					CharacterProperties.characterProperties.legMaterial = dwarfFemaleSkinTone [2];
					CharacterProperties.characterProperties.handMaterial = dwarfFemaleSkinTone [3];
					CharacterProperties.characterProperties.feetMaterial = dwarfFemaleSkinTone [4];
					break;
				case CharacterProperties.CharacterType.Elf:
					CharacterProperties.characterProperties.headMaterial = elfFemaleSkinTone [0];
					CharacterProperties.characterProperties.chestMaterial = elfFemaleSkinTone [1];
					CharacterProperties.characterProperties.legMaterial = elfFemaleSkinTone [2];
					CharacterProperties.characterProperties.handMaterial = elfFemaleSkinTone [3];
					CharacterProperties.characterProperties.feetMaterial = elfFemaleSkinTone [4];
					break;
				case CharacterProperties.CharacterType.Goblin:
					CharacterProperties.characterProperties.headMaterial = goblinFemaleSkinTone [0];
					CharacterProperties.characterProperties.chestMaterial = goblinFemaleSkinTone [1];
					CharacterProperties.characterProperties.legMaterial = goblinFemaleSkinTone [2];
					CharacterProperties.characterProperties.handMaterial = goblinFemaleSkinTone [3];
					CharacterProperties.characterProperties.feetMaterial = goblinFemaleSkinTone [4];
					break;
				default:
					CharacterProperties.characterProperties.headMaterial = humanFemaleSkinTone [0];
					CharacterProperties.characterProperties.chestMaterial = humanFemaleSkinTone [1];
					CharacterProperties.characterProperties.legMaterial = humanFemaleSkinTone [2];
					CharacterProperties.characterProperties.handMaterial = humanFemaleSkinTone [3];
					CharacterProperties.characterProperties.feetMaterial = humanFemaleSkinTone [4];
					break;
				}
				break;
			default:
				CharacterProperties.characterProperties.headMaterial = humanMaleSkinTone [0];
				CharacterProperties.characterProperties.chestMaterial = humanMaleSkinTone [1];
				CharacterProperties.characterProperties.legMaterial = humanMaleSkinTone [2];
				CharacterProperties.characterProperties.handMaterial = humanMaleSkinTone [3];
				CharacterProperties.characterProperties.feetMaterial = humanMaleSkinTone [4];
				break;
			}
			//UPDATE SKIN TONE OF SKIN MESHES
			CharacterProperties.characterProperties.head.GetComponent<Renderer>().sharedMaterial = CharacterProperties.characterProperties.headMaterial;
			CharacterProperties.characterProperties.torso.GetComponent<Renderer>().sharedMaterial = CharacterProperties.characterProperties.chestMaterial;
			CharacterProperties.characterProperties.legs.GetComponent<Renderer>().sharedMaterial = CharacterProperties.characterProperties.legMaterial;
			CharacterProperties.characterProperties.hands.GetComponent<Renderer>().sharedMaterial = CharacterProperties.characterProperties.handMaterial;
			CharacterProperties.characterProperties.feet.GetComponent<Renderer>().sharedMaterial = CharacterProperties.characterProperties.feetMaterial;

			//UPDATE SKIN TONE OF ARMORS AND OTHER CHARACTER MESHES THAT MAY CONTAIN A SKIN MATERIAL
			List<GameObject> armors = new List<GameObject>();
			CharacterProperties properties = CharacterProperties.characterProperties;
			if (properties.torsoArmor) {
				armors.Add (properties.torsoArmor.gameObject);
			}
			if (properties.legArmor) {
				armors.Add (properties.legArmor.gameObject);
			}
			if (properties.handArmor) {
				armors.Add (properties.handArmor.gameObject);
			}
			if (properties.feetArmor) {
				armors.Add (properties.feetArmor.gameObject);
			}
			foreach (GameObject armor in armors) {
				//if (armor.GetComponent<Renderer> ().materials.Length > 1) {
				if (properties.torsoArmor) {
					if (armor == properties.torsoArmor.gameObject) {
						Material[] mats = armor.GetComponent<Renderer> ().sharedMaterials;
						int i = 0;
						foreach (Material mat in mats) {
							//Simplify the names of the materials on our armor
							string matName = mat.name.Replace (" (Instance)", "");
							matName = matName.Replace (" 1", "");
							matName = matName.Replace (" 2", "");
							matName = matName.Replace (" 3", "");
							//Simplify the name of the material of our skin mesh
							string newMatName = properties.chestMaterial.name.Replace (" (UnityEngine.Material)", "");
							newMatName = newMatName.Replace (" 1", "");
							newMatName = newMatName.Replace (" 2", "");
							newMatName = newMatName.Replace (" 3", "");
							//if the names are the same, update the armor's skin material to match our character's skin material
							if (matName == newMatName) {
								mats [i] = properties.chestMaterial;
							}
							i += 1;
						}
						armor.GetComponent<Renderer> ().sharedMaterials = mats;
					}
				}
				if (properties.legArmor) {
					if (armor == properties.legArmor.gameObject) {
						Material[] mats = armor.GetComponent<Renderer> ().sharedMaterials;
						int i = 0;
						foreach (Material mat in mats) {
							//Simplify the names of the materials on our armor
							string matName = mat.name.Replace (" (Instance)", "");
							matName = matName.Replace (" 1", "");
							matName = matName.Replace (" 2", "");
							matName = matName.Replace (" 3", "");
							//Simplify the name of the material of our skin mesh
							string newMatName = properties.legMaterial.name.Replace (" (UnityEngine.Material)", "");
							newMatName = newMatName.Replace (" 1", "");
							newMatName = newMatName.Replace (" 2", "");
							newMatName = newMatName.Replace (" 3", "");
							//if the names are the same, update the armor's skin material to match our character's skin material
							if (matName == newMatName) {
								mats [i] = properties.legMaterial;
							}
							i += 1;
						}
						armor.GetComponent<Renderer> ().sharedMaterials = mats;
					}
				}
				if (properties.handArmor) {
					if (armor == properties.handArmor.gameObject) {
						Material[] mats = armor.GetComponent<Renderer> ().sharedMaterials;
						int i = 0;
						foreach (Material mat in mats) {
							//Simplify the names of the materials on our armor
							string matName = mat.name.Replace (" (Instance)", "");
							matName = matName.Replace (" 1", "");
							matName = matName.Replace (" 2", "");
							matName = matName.Replace (" 3", "");
							//Simplify the name of the material of our skin mesh
							string newMatName = properties.handMaterial.name.Replace (" (UnityEngine.Material)", "");
							newMatName = newMatName.Replace (" 1", "");
							newMatName = newMatName.Replace (" 2", "");
							newMatName = newMatName.Replace (" 3", "");
							//if the names are the same, update the armor's skin material to match our character's skin material
							if (matName == newMatName) {
								mats [i] = properties.handMaterial;
							}
							i += 1;
						}
						armor.GetComponent<Renderer> ().sharedMaterials = mats;
					}
				}
				if (properties.feetArmor) {
					if (armor == properties.feetArmor.gameObject) {
						Material[] mats = armor.GetComponent<Renderer> ().sharedMaterials;
						int i = 0;
						foreach (Material mat in mats) {
							//Simplify the names of the materials on our armor
							string matName = mat.name.Replace (" (Instance)", "");
							matName = matName.Replace (" 1", "");
							matName = matName.Replace (" 2", "");
							matName = matName.Replace (" 3", "");
							//Simplify the name of the material of our skin mesh
							string newMatName = properties.feetMaterial.name.Replace (" (UnityEngine.Material)", "");
							newMatName = newMatName.Replace (" 1", "");
							newMatName = newMatName.Replace (" 2", "");
							newMatName = newMatName.Replace (" 3", "");
							//if the names are the same, update the armor's skin material to match our character's skin material
							if (matName == newMatName) {
								mats [i] = properties.feetMaterial;
							}
							i += 1;
						}
						armor.GetComponent<Renderer> ().sharedMaterials = mats;
					}
				}
				//}
			}
		}
	}
}
