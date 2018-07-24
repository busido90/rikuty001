using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using LylekGames.RPGCharacter;

namespace LylekGames.RPGCharacter {
	public class SwapArmors : MonoBehaviour {

		[HideInInspector]
		public CharacterProperties properties;
		public ArmorType armorType; //type of armor to equipped
		public enum ArmorType { //an enumeration of our possible armor types
			Helmet,
			Chest,
			Legs,
			Hands,
			Feet,
			Hair,
			Beard,
		}
		public Transform[] myArmors; //armor, skinned mesh, prefab
		[HideInInspector]
		public int sliderValue;

		void Awake() {
			if (GetComponent<Slider> ()) {
				GetComponent<Slider> ().maxValue = myArmors.Length - 1;
			}
		}
		void Start() {
			properties = CharacterProperties.characterProperties;
			RecalculateArmors();
		}
		public void RecalculateArmors() {
			//Recalculate all slider bar armors, and other meshes, from our new character resource path.
			int i = 0;
			foreach(Transform armor in myArmors) {
				string newPath = properties.resourcesPath + armor.name;
				if(Resources.Load<Transform>(newPath)) {
					myArmors[i] = Resources.Load<Transform>(newPath);
				}
				else {
					if(armorType == ArmorType.Beard && properties.gender == CharacterProperties.GenderType.Female) {
						//if character is female, ignore if beard mesh is not found, and destroy existing beard mesh
						if(properties.beard) {
							Destroy(properties.beard.gameObject);
						}
						properties.beard = null;
					}
					else {
						//Resources could not be found!
						//Debug.LogError("Resources/" + newPath + " does not exist! Character will use previous character's mesh instead, which may not fit properly.");
					}
				}
				i += 1;
			}
			EquippedNewArmor();
		}
		public void EquippedNewArmor() {
			if(armorType == ArmorType.Beard && properties.gender == CharacterProperties.GenderType.Female) {

			}
			else {
				sliderValue = (int)gameObject.GetComponent<Slider>().value;
				//if our slider value is great than -1, equipped our new helmet
				if(sliderValue >= 0) {
					DestroyArmor();
					SpawnNewArmor();
					DisplayArmor();
				}
				else {
					//if slider value is at -1, remove our helmet and display our skinMesh
					DestroyArmor();
				}
			}
		}
		public void SpawnNewArmor() {
			//Spawn our new armor piece
			Transform armor = Instantiate(myArmors[sliderValue], properties.transform.position, properties.transform.rotation) as Transform;
			//set our armor as a child of our character
			armor.parent = properties.character;
			armor.transform.localPosition = Vector3.zero;
			armor.transform.localRotation = Quaternion.identity;

			//if our armor has a cloth component, assign capsule colliders | this will make armor, such as a robe, move with the character
			if(armor.GetComponent<Cloth>()) {
				Cloth cloth = armor.GetComponent<Cloth>();
				cloth.enabled = false;

				cloth.capsuleColliders = properties.boneColliders;
				cloth.enabled = true;
			}
			//set our armor's meshes' bones as our character's bones
			//this is done by accessing a skinned mesh renderer already animated by our character's armature. For this, we use a character body part, since we never Destroy() those.
			armor.GetComponent<SkinnedMeshRenderer>().bones = properties.torso.GetComponent<SkinnedMeshRenderer>().bones;
			//assign skin material to armors requiring more than one material
			if (armor.GetComponent<Renderer> ().sharedMaterials.Length > 1) {
				StartCoroutine(AssignSkinMaterial (armor));
			}
			//assign our new armor to our CharacterProperties
			AssignNewArmor(armor);
		}
		public void DestroyArmor() { 
			//destroy currently equipped armor
			switch (armorType) {
			case ArmorType.Chest:
				properties.torso.gameObject.SetActive(true);
				if(properties.torsoArmor) {
					Destroy(properties.torsoArmor.gameObject);
					properties.torsoArmor = null;
				}
				break;
			case ArmorType.Legs:
				properties.legs.gameObject.SetActive(true);
				if(properties.legArmor) {
					Destroy(properties.legArmor.gameObject);
					properties.legArmor = null;
				}
				break;
			case ArmorType.Hands:
				properties.hands.gameObject.SetActive(true);
				if(properties.handArmor) {
					Destroy(properties.handArmor.gameObject);
					properties.handArmor = null;
				}
				break;
			case ArmorType.Feet:
				properties.feet.gameObject.SetActive(true);
				if(properties.feetArmor) {
					Destroy(properties.feetArmor.gameObject);
					properties.feetArmor = null;
				}
				break;
			case ArmorType.Helmet:
				if(properties.hair) {
					properties.hair.gameObject.SetActive(true);
				}
				if(properties.headArmor) {
					Destroy(properties.headArmor.gameObject);
					properties.headArmor = null;
				}
				break;
			case ArmorType.Hair:
				if(properties.headArmor) {
					properties.headArmor.gameObject.SetActive(true);
				}
				if(properties.hair) {
					Destroy(properties.hair.gameObject);
					properties.hair = null;
				}
				break;
			case ArmorType.Beard:
				if(properties.beard) {
					Destroy(properties.beard.gameObject);
					properties.beard = null;
				}
				break;
			default:
				break;
			}
		}
		public void DisplayArmor() {
			//Enable armor mesh and disable corresponding body mesh
			switch (armorType) {
			case ArmorType.Helmet:
				if(properties.hair) {
					properties.hair.gameObject.SetActive(false);
				}
				break;
			case ArmorType.Chest:
				properties.torso.gameObject.SetActive(false);
				if(properties.torsoArmor) {
					properties.torsoArmor.gameObject.SetActive(true);
				}
				break;
			case ArmorType.Legs:
				properties.legs.gameObject.SetActive(false);
				if(properties.legArmor) {
					properties.legArmor.gameObject.SetActive(true);
				}
				break;
			case ArmorType.Hands:
				properties.hands.gameObject.SetActive(false);
				if(properties.handArmor) {
					properties.handArmor.gameObject.SetActive(true);
				}
				break;
			case ArmorType.Feet:
				properties.feet.gameObject.SetActive(false);
				if(properties.feetArmor) {
					properties.feetArmor.gameObject.SetActive(true);
				}
				break;
			case ArmorType.Hair:
				if(properties.headArmor) {
					properties.headArmor.gameObject.SetActive(false);
				}
				if(properties.hair) {
					properties.hair.gameObject.SetActive(true);
					properties.hair.GetComponent<Renderer>().sharedMaterial = properties.hairColor;
				}
				break;
			case ArmorType.Beard:
				if(properties.beard) {
					properties.beard.gameObject.SetActive(true);
					properties.beard.GetComponent<Renderer>().sharedMaterial = properties.hairColor;
				}
				break;
			default:
				break;
			}
		}
		public void AssignNewArmor(Transform newArmor) {
			switch (armorType) {
			case ArmorType.Helmet:
				properties.headArmor = newArmor;
				break;
			case ArmorType.Chest:
				properties.torsoArmor = newArmor;
				break;
			case ArmorType.Legs:
				properties.legArmor = newArmor;
				break;
			case ArmorType.Hands:
				properties.handArmor = newArmor;
				break;
			case ArmorType.Feet:
				properties.feetArmor = newArmor;
				break;
			case ArmorType.Hair:
				properties.hair = newArmor;
				break;
			case ArmorType.Beard:
				properties.beard = newArmor;
				break;
			default:
				break;
			}
		}
		public void HideArmor() {
			//Disable armor mesh and enable corresponding body mesh
			switch (armorType) {
			case ArmorType.Helmet:
				if(properties.hair) {
					properties.hair.gameObject.SetActive(true);
				}
				if(properties.headArmor) {
					properties.headArmor.gameObject.SetActive(false);
				}
				break;
			case ArmorType.Chest:
				properties.torso.gameObject.SetActive(true);
				if(properties.torsoArmor) {
					properties.torsoArmor.gameObject.SetActive(false);
				}
				break;
			case ArmorType.Legs:
				properties.legs.gameObject.SetActive(true);
				if(properties.legArmor) {
					properties.legArmor.gameObject.SetActive(false);
				}
				break;
			case ArmorType.Hands:
				properties.hands.gameObject.SetActive(true);
				if(properties.handArmor) {
					properties.handArmor.gameObject.SetActive(false);
				}
				break;
			case ArmorType.Feet:
				properties.feet.gameObject.SetActive(true);
				if(properties.feetArmor) {
					properties.feetArmor.gameObject.SetActive(false);
				}
				break;
			default:
				break;
			}
		}
		public IEnumerator AssignSkinMaterial(Transform newArmor) {
			//In the even of Randomizing, we will require that armor mesh, skin meshes, and skin material are assign before cross referencing for skin materials on armor meshes
			//for this, we will be required to wait, very briefly.
			yield return null;
			if (newArmor != null) {
				switch (armorType) {
				case ArmorType.Chest:
					Material[] mats = newArmor.GetComponent<Renderer> ().sharedMaterials;
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
					newArmor.GetComponent<Renderer> ().sharedMaterials = mats;
					break;
				case ArmorType.Legs:
					mats = newArmor.GetComponent<Renderer> ().sharedMaterials;
					i = 0;
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
					newArmor.GetComponent<Renderer> ().sharedMaterials = mats;
					break;
				case ArmorType.Hands:
					mats = newArmor.GetComponent<Renderer> ().sharedMaterials;
					i = 0;
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
					newArmor.GetComponent<Renderer> ().sharedMaterials = mats;
					break;
				case ArmorType.Feet:
					mats = newArmor.GetComponent<Renderer> ().sharedMaterials;
					i = 0;
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
					newArmor.GetComponent<Renderer> ().sharedMaterials = mats;
					break;
				default:
					break;
				}
			}
		}
		//THIS FUNCTION IS CALLED FROM OUR RANDOMIZE-ALL BUTTON, GIVING OUR SLIDER BAR A RANDOM VALUE
		public void RandomizeValue() {
			if(armorType == ArmorType.Beard && properties.gender == CharacterProperties.GenderType.Female) {

			}
			else {
				int randomValue = Random.Range(0, (int)GetComponent<Slider>().maxValue + 1);
				GetComponent<Slider>().value = randomValue;
			}
		}
	}
}
