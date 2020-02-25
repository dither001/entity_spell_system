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

#ifndef ITEM_ENUMS_H
#define ITEM_ENUMS_H

#include "core/object.h"
#include "core/ustring.h"

class ItemEnums : public Object {
	GDCLASS(ItemEnums, Object);

public:
	static const String BINDING_STRING_RARITY;
	static const String BINDING_STRING_RARITY_FLAG;
	static const String BINDING_STRING_ITEM_TYPE;
	static const String BINDING_STRING_ITEM_TYPE_FLAGS;
	static const String BINDING_STRING_ITEM_SUB_TYPE;
	static const String BINDING_STRING_ITEM_SUB_SUB_TYPE;
	static const String BINDING_STRING_EQUIP_SLOTS;
	static const String BINDING_STRING_ARMOR_TYPE;
	static const String BINDING_STRING_ENTITY_TEXTURE_LAYERS;

	enum ItemRarity {
		ITEM_RARITY_NONE = 0,
		ITEM_RARITY_COMMON = 1,
		ITEM_RARITY_UNCOMMON = 2,
		ITEM_RARITY_SUPERIOR = 3,
		ITEM_RARITY_HEROIC = 4,
		ITEM_RARITY_MYTHIC = 5,
		ITEM_RARITY_ARTIFACT = 6,
	};

	enum ItemRarityFlag {
		ITEM_RARITY_FLAG_NONE = 0,
		ITEM_RARITY_FLAG_COMMON = 1 << 0,
		ITEM_RARITY_FLAG_UNCOMMON = 1 << 1,
		ITEM_RARITY_FLAG_SUPERIOR = 1 << 2,
		ITEM_RARITY_FLAG_HEROIC = 1 << 3,
		ITEM_RARITY_FLAG_MYTHIC = 1 << 4,
		ITEM_RARITY_FLAG_ARTIFACT = 1 << 5,
	};

	enum ItemType {
		ITEM_TYPE_NONE = 0,
		ITEM_TYPE_EQUIPMENT = 1 << 0,
		ITEM_TYPE_POTION = 1 << 1,
		ITEM_TYPE_HERB = 1 << 2,
		ITEM_TYPE_ORE = 1 << 3,
		ITEM_TYPE_GEMSTONE = 1 << 4,
		ITEM_TYPE_FOOD = 1 << 5,
		ITEM_TYPE_ALCHEMY = 1 << 6,
		ITEM_TYPE_ENGINEERING = 1 << 7,
		ITEM_TYPE_ENCHANTING = 1 << 8,
		ITEM_TYPE_TAILORING = 1 << 9,
		ITEM_TYPE_RECIPE = 1 << 10,
		ITEM_TYPE_CURRENCY = 1 << 11,
		ITEM_TYPE_BAG = 1 << 12,
	};

	enum ItemSubtype {
		ITEM_SUB_TYPE_NONE = 0,
		ITEM_SUB_TYPE_SWORD,
		ITEM_SUB_TYPE_AXE,
		ITEM_SUB_TYPE_MACE,
		ITEM_SUB_TYPE_DAGGER,
		ITEM_SUB_TYPE_BOW,
		ITEM_SUB_TYPE_CROSSBOW,
		ITEM_SUB_TYPE_GUN,
		ITEM_SUB_TYPE_WAND,
		ITEM_SUB_TYPE_QUEST_ITEM,
	};

	enum ItemSubSubtype {
		ITEM_SUB_SUB_TYPE_NONE,
		ITEM_SUB_SUB_TYPE_TWO_HAND,
		ITEM_SUB_SUB_TYPE_ONE_HAND,
		ITEM_SUB_SUB_TYPE_LEFT_HAND,
		ITEM_SUB_SUB_TYPE_RIGHT_HAND
	};

	enum EquipSlots {
		EQUIP_SLOT_HEAD = 0,
		EQUIP_SLOT_NECK = 1,
		EQUIP_SLOT_SHOULDERS = 2,
		EQUIP_SLOT_CHEST = 3,
		EQUIP_SLOT_GLOVES = 4,
		EQUIP_SLOT_BELT = 5,
		EQUIP_SLOT_LEGS = 6,
		EQUIP_SLOT_FEET = 7,

		EQUIP_SLOT_RING_1 = 8,
		EQUIP_SLOT_RING_2 = 9,

		EQUIP_SLOT_TRINKET_1 = 10,
		EQUIP_SLOT_TRINKET_2 = 11,

		EQUIP_SLOT_MAIN_HAND = 12,
		EQUIP_SLOT_OFF_HAND = 13,

		EQUIP_SLOT_EQUIP_SLOT_MAX = 14,
		EQUIP_SLOT_NONE = 14
	};

	enum ArmorType {
		ARMOR_TYPE_NONE = 0,
		ARMOR_TYPE_CLOTH = 1,
		ARMOR_TYPE_LEATHER = 2,
		ARMOR_TYPE_MAIL = 3,
		ARMOR_TYPE_PLATE = 4,
		ARMOR_TYPE_MAX = 5,
	};

	enum EntityTextureLayers {
		ENTITY_TEXTURE_LAYER_NONE = 0,
		ENTITY_TEXTURE_LAYER_SKIN = 1,
		ENTITY_TEXTURE_LAYER_UNDERWEAR = 2,
		ENTITY_TEXTURE_LAYER_SHIRT = 3,
		ENTITY_TEXTURE_LAYER_CLOTHES_BASE = 4,
		ENTITY_TEXTURE_LAYER_CLOTHES_1 = 5,
		ENTITY_TEXTURE_LAYER_CLOTHES_2 = 6,
		ENTITY_TEXTURE_LAYER_CLOTHES_3 = 7,
		ENTITY_TEXTURE_LAYER_CLOTHES_4 = 8,
		ENTITY_TEXTURE_LAYER_CLOTHES_5 = 9,
		ENTITY_TEXTURE_LAYER_BELT = 10,
		ENTITY_TEXTURE_LAYER_TABARD = 11,
		ENTITY_TEXTURE_LAYER_OVERLAY = 12
	};

	static String get_equip_slot_string(int slot);
	static String get_armor_type_string(int type);

	ItemEnums() {}

protected:
	static void _bind_methods() {
		BIND_ENUM_CONSTANT(ITEM_RARITY_NONE);
		BIND_ENUM_CONSTANT(ITEM_RARITY_COMMON);
		BIND_ENUM_CONSTANT(ITEM_RARITY_UNCOMMON);
		BIND_ENUM_CONSTANT(ITEM_RARITY_SUPERIOR);
		BIND_ENUM_CONSTANT(ITEM_RARITY_HEROIC);
		BIND_ENUM_CONSTANT(ITEM_RARITY_MYTHIC);
		BIND_ENUM_CONSTANT(ITEM_RARITY_ARTIFACT);

		BIND_ENUM_CONSTANT(ITEM_RARITY_FLAG_NONE);
		BIND_ENUM_CONSTANT(ITEM_RARITY_FLAG_COMMON);
		BIND_ENUM_CONSTANT(ITEM_RARITY_FLAG_UNCOMMON);
		BIND_ENUM_CONSTANT(ITEM_RARITY_FLAG_SUPERIOR);
		BIND_ENUM_CONSTANT(ITEM_RARITY_FLAG_HEROIC);
		BIND_ENUM_CONSTANT(ITEM_RARITY_FLAG_MYTHIC);
		BIND_ENUM_CONSTANT(ITEM_RARITY_FLAG_ARTIFACT);

		BIND_ENUM_CONSTANT(ITEM_TYPE_NONE);
		BIND_ENUM_CONSTANT(ITEM_TYPE_EQUIPMENT);
		BIND_ENUM_CONSTANT(ITEM_TYPE_POTION);
		BIND_ENUM_CONSTANT(ITEM_TYPE_HERB);
		BIND_ENUM_CONSTANT(ITEM_TYPE_ORE);
		BIND_ENUM_CONSTANT(ITEM_TYPE_GEMSTONE);
		BIND_ENUM_CONSTANT(ITEM_TYPE_FOOD);
		BIND_ENUM_CONSTANT(ITEM_TYPE_ALCHEMY);
		BIND_ENUM_CONSTANT(ITEM_TYPE_ENGINEERING);
		BIND_ENUM_CONSTANT(ITEM_TYPE_ENCHANTING);
		BIND_ENUM_CONSTANT(ITEM_TYPE_TAILORING);
		BIND_ENUM_CONSTANT(ITEM_TYPE_RECIPE);
		BIND_ENUM_CONSTANT(ITEM_TYPE_CURRENCY);
		BIND_ENUM_CONSTANT(ITEM_TYPE_BAG);

		BIND_ENUM_CONSTANT(ITEM_SUB_TYPE_NONE);
		BIND_ENUM_CONSTANT(ITEM_SUB_TYPE_SWORD);
		BIND_ENUM_CONSTANT(ITEM_SUB_TYPE_AXE);
		BIND_ENUM_CONSTANT(ITEM_SUB_TYPE_MACE);
		BIND_ENUM_CONSTANT(ITEM_SUB_TYPE_DAGGER);
		BIND_ENUM_CONSTANT(ITEM_SUB_TYPE_BOW);
		BIND_ENUM_CONSTANT(ITEM_SUB_TYPE_CROSSBOW);
		BIND_ENUM_CONSTANT(ITEM_SUB_TYPE_GUN);
		BIND_ENUM_CONSTANT(ITEM_SUB_TYPE_WAND);
		BIND_ENUM_CONSTANT(ITEM_SUB_TYPE_QUEST_ITEM);

		BIND_ENUM_CONSTANT(ITEM_SUB_SUB_TYPE_NONE);
		BIND_ENUM_CONSTANT(ITEM_SUB_SUB_TYPE_TWO_HAND);
		BIND_ENUM_CONSTANT(ITEM_SUB_SUB_TYPE_ONE_HAND);
		BIND_ENUM_CONSTANT(ITEM_SUB_SUB_TYPE_LEFT_HAND);
		BIND_ENUM_CONSTANT(ITEM_SUB_SUB_TYPE_RIGHT_HAND);

		BIND_ENUM_CONSTANT(EQUIP_SLOT_HEAD);
		BIND_ENUM_CONSTANT(EQUIP_SLOT_NECK);
		BIND_ENUM_CONSTANT(EQUIP_SLOT_SHOULDERS);
		BIND_ENUM_CONSTANT(EQUIP_SLOT_CHEST);
		BIND_ENUM_CONSTANT(EQUIP_SLOT_GLOVES);
		BIND_ENUM_CONSTANT(EQUIP_SLOT_BELT);
		BIND_ENUM_CONSTANT(EQUIP_SLOT_LEGS);
		BIND_ENUM_CONSTANT(EQUIP_SLOT_FEET);

		BIND_ENUM_CONSTANT(EQUIP_SLOT_RING_1);
		BIND_ENUM_CONSTANT(EQUIP_SLOT_RING_2);
		BIND_ENUM_CONSTANT(EQUIP_SLOT_TRINKET_1);
		BIND_ENUM_CONSTANT(EQUIP_SLOT_TRINKET_2);

		BIND_ENUM_CONSTANT(EQUIP_SLOT_MAIN_HAND);
		BIND_ENUM_CONSTANT(EQUIP_SLOT_OFF_HAND);

		BIND_ENUM_CONSTANT(EQUIP_SLOT_NONE);

		BIND_ENUM_CONSTANT(EQUIP_SLOT_EQUIP_SLOT_MAX);

		BIND_ENUM_CONSTANT(ARMOR_TYPE_NONE);
		BIND_ENUM_CONSTANT(ARMOR_TYPE_CLOTH);
		BIND_ENUM_CONSTANT(ARMOR_TYPE_LEATHER);
		BIND_ENUM_CONSTANT(ARMOR_TYPE_MAIL);
		BIND_ENUM_CONSTANT(ARMOR_TYPE_PLATE);
		BIND_ENUM_CONSTANT(ARMOR_TYPE_MAX);

		BIND_ENUM_CONSTANT(ENTITY_TEXTURE_LAYER_NONE);
		BIND_ENUM_CONSTANT(ENTITY_TEXTURE_LAYER_SKIN);
		BIND_ENUM_CONSTANT(ENTITY_TEXTURE_LAYER_UNDERWEAR);
		BIND_ENUM_CONSTANT(ENTITY_TEXTURE_LAYER_SHIRT);
		BIND_ENUM_CONSTANT(ENTITY_TEXTURE_LAYER_CLOTHES_BASE);
		BIND_ENUM_CONSTANT(ENTITY_TEXTURE_LAYER_CLOTHES_1);
		BIND_ENUM_CONSTANT(ENTITY_TEXTURE_LAYER_CLOTHES_2);
		BIND_ENUM_CONSTANT(ENTITY_TEXTURE_LAYER_CLOTHES_3);
		BIND_ENUM_CONSTANT(ENTITY_TEXTURE_LAYER_CLOTHES_4);
		BIND_ENUM_CONSTANT(ENTITY_TEXTURE_LAYER_CLOTHES_5);
		BIND_ENUM_CONSTANT(ENTITY_TEXTURE_LAYER_BELT);
		BIND_ENUM_CONSTANT(ENTITY_TEXTURE_LAYER_TABARD);
		BIND_ENUM_CONSTANT(ENTITY_TEXTURE_LAYER_OVERLAY);
	}
};

VARIANT_ENUM_CAST(ItemEnums::ItemRarity);
VARIANT_ENUM_CAST(ItemEnums::ItemRarityFlag);
VARIANT_ENUM_CAST(ItemEnums::ItemType);
VARIANT_ENUM_CAST(ItemEnums::ItemSubtype);
VARIANT_ENUM_CAST(ItemEnums::ItemSubSubtype);
VARIANT_ENUM_CAST(ItemEnums::EquipSlots);
VARIANT_ENUM_CAST(ItemEnums::ArmorType);
VARIANT_ENUM_CAST(ItemEnums::EntityTextureLayers);

#endif
