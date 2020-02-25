/*
Copyright (c) 2019-2020 Péter Magyar

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "item_enums.h"

const String ItemEnums::BINDING_STRING_RARITY = "None,Common,Uncommon,Superior,Heroic,Mythic,Artifact";
const String ItemEnums::BINDING_STRING_RARITY_FLAG = "Common,Uncommon,Superior,Heroic,Mythic,Artifact";
const String ItemEnums::BINDING_STRING_ITEM_TYPE = "None,Equipment,Potion,Herb,Ore,Gemstone,Food,Alchemy,Engineering,Enchanting,Tailoring,Recipe,Currency,Bag";
const String ItemEnums::BINDING_STRING_ITEM_TYPE_FLAGS = "Equipment,Potion,Herb,Ore,Gemstone,Food,Alchemy,Engineering,Enchanting,Tailoring,Recipe,Currency,Bag";
const String ItemEnums::BINDING_STRING_ITEM_SUB_TYPE = "None,Sword,Axe,Mace,Dagger,Bow,Crossbow,Gun,Wand,Quest Item";
const String ItemEnums::BINDING_STRING_ITEM_SUB_SUB_TYPE = "None,Two Hand,One Hand,Left Hand,Right Hand";
const String ItemEnums::BINDING_STRING_EQUIP_SLOTS = "Head,Neck,Shoulders,Chest,Gloves,Belt,Legs,Feet,Ring 1,Ring 2,Trinket 1,Trinket 2,Main Hand,Off Hand,None";
const String ItemEnums::BINDING_STRING_ARMOR_TYPE = "None,Cloth,Leather,Mail,Plate";
const String ItemEnums::BINDING_STRING_ENTITY_TEXTURE_LAYERS = "None,Skin,Underwear,Shirt,Clothes Base,Clothes 1,Clothes 2,Clothes 3,Clothes 4,Clothes 5,Belt,Tabard,Overlay";

String ItemEnums::get_equip_slot_string(int slot) {
	switch (slot) {
		case 0:
			return "head";
		case 1:
			return "neck";
		case 2:
			return "shoulders";
		case 3:
			return "chest";
		case 4:
			return "gloves";
		case 5:
			return "belt";
		case 6:
			return "legs";
		case 7:
			return "feet";
		case 8:
			return "ring_1";
		case 9:
			return "ring_2";
		case 10:
			return "trinket_1";
		case 11:
			return "trinket_2";
		case 12:
			return "main_hand";
		case 13:
			return "off_hand";
	}

	return "";
}

String ItemEnums::get_armor_type_string(int type) {
	switch (type) {
		case 0:
			return "none";
		case 1:
			return "cloth";
		case 2:
			return "leather";
		case 3:
			return "mail";
		case 4:
			return "plate";
	}

	return "";
}
