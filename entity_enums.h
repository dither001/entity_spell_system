#ifndef ENTITY_ENUMS_H
#define ENTITY_ENUMS_H

#include "core/object.h"
#include "core/ustring.h"

class EntityEnums : public Object {
	GDCLASS(EntityEnums, Object);

public:
	static const String BINDING_STRING_PLAYER_RESOURCE_TYPES;

	static const String BINDING_STRING_ENTITY_TYPES;
	static const String BINDING_STRING_ENTITY_CONTOLLER;
	static const String BINDING_STRING_ENTITY_FLAGS;
	static const String BINDING_STRING_ENTITY_STATE_TYPES;
    static const String BINDING_STRING_CHARCATER_SKELETON_POINTS;
    static const String BINDING_STRING_AI_STATES;
    static const String BINDING_STRING_ENTITY_IMMUNITY_FLAGS;
    static const String BINDING_STRING_ENTITY_INTERACTION_TYPE;
    static const String BINDING_STRING_ENTITY_PLAYSTYLE_TYPE;

	static const int PLAYER_RESOURCE_TYPES_RAGE;
	static const int PLAYER_RESOURCE_TYPES_MANA;
	static const int PLAYER_RESOURCE_TYPES_ENERGY;
	static const int PLAYER_RESOURCE_TYPES_TIME_ANOMALY;

	enum EntityType {
		ENITIY_TYPE_NONE,
		ENITIY_TYPE_CREATURE,
		ENITIY_TYPE_TOTEM,
		ENITIY_TYPE_IDOL,
		ENITIY_TYPE_HUMANOID,
		ENITIY_TYPE_MECHANICAL,
		ENITIY_TYPE_BEAST,
		ENITIY_TYPE_DRAGONKIN,
		ENITIY_TYPE_ELEMENTAL,
		ENITIY_TYPE_GHOST,
		ENITIY_TYPE_ENERGY,
		ENITIY_TYPE_ANOMALY,
		ENITIY_TYPE_DEMON,
		ENITIY_TYPE_OBJECT,
	};

	enum EntityController {
		ENITIY_CONTROLLER_NONE,
		ENITIY_CONTROLLER_PLAYER,
		ENITIY_CONTROLLER_AI,
		ENITIY_CONTROLLER_MOB
	};

	enum EntityFlags {
		ENITIY_FLAGS_NONE = 0,

		ENTITY_FLAGS_UNTARGETALBE = 1 << 0,
		ENTITY_FLAGS_HIDDEN = 1 << 1,
		ENTITY_FLAGS_INTERACTABLE = 1 << 2,
		ENTITY_FLAGS_HOSTILE = 1 << 3,
	};

	enum EntityStateTypeFlags {
		ENTITY_STATE_TYPE_FLAG_NONE = 0,
		ENTITY_STATE_TYPE_FLAG_STUN = 1 << 0,
		ENTITY_STATE_TYPE_FLAG_ROOT = 1 << 1,
		ENTITY_STATE_TYPE_FLAG_FROZEN = 1 << 2,
		ENTITY_STATE_TYPE_FLAG_SILENCED = 1 << 3,
		ENTITY_STATE_TYPE_FLAG_DISORIENTED = 1 << 4,
		ENTITY_STATE_TYPE_FLAG_FEARED = 1 << 5,
		ENTITY_STATE_TYPE_FLAG_BURNING = 1 << 6,
		ENTITY_STATE_TYPE_FLAG_COLD = 1 << 7,
		ENTITY_STATE_TYPE_FLAG_CURSED = 1 << 8,
		ENTITY_STATE_TYPE_FLAG_PACIFIED = 1 << 9,
	};

	enum EntityStateTypeIndexes {
		ENTITY_STATE_TYPE_INDEX_NONE = 0,
		ENTITY_STATE_TYPE_INDEX_STUN = 1,
		ENTITY_STATE_TYPE_INDEX_ROOT = 2,
		ENTITY_STATE_TYPE_INDEX_FROZEN = 3,
		ENTITY_STATE_TYPE_INDEX_SILENCED = 4,
		ENTITY_STATE_TYPE_INDEX_DISORIENTED = 5,
		ENTITY_STATE_TYPE_INDEX_FEARED = 6,
		ENTITY_STATE_TYPE_INDEX_BURNING = 7,
		ENTITY_STATE_TYPE_INDEX_COLD = 8,
		ENTITY_STATE_TYPE_INDEX_CURSED = 9,
		ENTITY_STATE_TYPE_INDEX_PACIFIED = 10,

		ENTITY_STATE_TYPE_INDEX_MAX = 11,
	};

	static EntityStateTypeFlags get_state_flag_for_index(int index) {
		switch (index) {
			case ENTITY_STATE_TYPE_INDEX_STUN:
				return ENTITY_STATE_TYPE_FLAG_STUN;
			case ENTITY_STATE_TYPE_INDEX_ROOT:
				return ENTITY_STATE_TYPE_FLAG_ROOT;
			case ENTITY_STATE_TYPE_INDEX_FROZEN:
				return ENTITY_STATE_TYPE_FLAG_FROZEN;
			case ENTITY_STATE_TYPE_INDEX_SILENCED:
				return ENTITY_STATE_TYPE_FLAG_SILENCED;
			case ENTITY_STATE_TYPE_INDEX_DISORIENTED:
				return ENTITY_STATE_TYPE_FLAG_DISORIENTED;
			case ENTITY_STATE_TYPE_INDEX_FEARED:
				return ENTITY_STATE_TYPE_FLAG_FEARED;
			case ENTITY_STATE_TYPE_INDEX_BURNING:
				return ENTITY_STATE_TYPE_FLAG_BURNING;
			case ENTITY_STATE_TYPE_INDEX_COLD:
				return ENTITY_STATE_TYPE_FLAG_COLD;
			case ENTITY_STATE_TYPE_INDEX_CURSED:
				return ENTITY_STATE_TYPE_FLAG_CURSED;
			case ENTITY_STATE_TYPE_INDEX_PACIFIED:
				return ENTITY_STATE_TYPE_FLAG_PACIFIED;
		}

		return ENTITY_STATE_TYPE_FLAG_NONE;
	}

	enum EntityImmunityFlags {
		ENTITY_IMMUNITY_FLAG_NONE = 0,

		ENTITY_IMMUNITY_FLAG_STUN = 1 << 0,
		ENTITY_IMMUNITY_FLAG_ROOT = 1 << 1,
		ENTITY_IMMUNITY_FLAG_FREEZE = 1 << 2,
		ENTITY_IMMUNITY_FLAG_SILENCE = 1 << 3,
		ENTITY_IMMUNITY_FLAG_DISORIENT = 1 << 4,
		ENTITY_IMMUNITY_FLAG_FEAR = 1 << 5,
		ENTITY_IMMUNITY_FLAG_BURNING = 1 << 6,
		ENTITY_IMMUNITY_FLAG_COLD = 1 << 7,
		ENTITY_IMMUNITY_FLAG_PACIFY = 1 << 8,

		ENTITY_IMMUNITY_FLAG_MAGIC = 1 << 9,
		ENTITY_IMMUNITY_FLAG_POISON = 1 << 10,
		ENTITY_IMMUNITY_FLAG_PHYSICAL = 1 << 11,
		ENTITY_IMMUNITY_FLAG_CURSE = 1 << 12,
		ENTITY_IMMUNITY_FLAG_BLEED = 1 << 13,

		ENTITY_IMMUNITY_FLAG_MELEE = 1 << 14,
		ENTITY_IMMUNITY_FLAG_HOLY = 1 << 15,
		ENTITY_IMMUNITY_FLAG_SHADOW = 1 << 16,
		ENTITY_IMMUNITY_FLAG_NATURE = 1 << 17,
		ENTITY_IMMUNITY_FLAG_FIRE = 1 << 18,
		ENTITY_IMMUNITY_FLAG_FROST = 1 << 19,
		ENTITY_IMMUNITY_FLAG_LIGHTNING = 1 << 20,
		ENTITY_IMMUNITY_FLAG_CHAOS = 1 << 21,

		ENTITY_IMMUNITY_FLAG_SLOW = 1 << 22,
		ENTITY_IMMUNITY_FLAG_CRIT = 1 << 23,
		ENTITY_IMMUNITY_FLAG_AOE = 1 << 24,
		ENTITY_IMMUNITY_FLAG_DAMAGE = 1 << 25,
		ENTITY_IMMUNITY_FLAG_FALL_DAMAGE = 1 << 26,
		ENTITY_IMMUNITY_FLAG_PROJECTILE = 1 << 27,
		ENTITY_IMMUNITY_FLAG_DEBUFF = 1 << 28,
		ENTITY_IMMUNITY_FLAG_ATTACKS = 1 << 29,
	};

    enum CharacterSkeletonPoints {
		SKELETON_POINT_ROOT = 0,
		SKELETON_POINT_PELVIS = 1,
		SKELETON_POINT_SPINE = 2,
		SKELETON_POINT_SPINE_1 = 3,
		SKELETON_POINT_SPINE_2 = 4,
		SKELETON_POINT_NECK = 5,
		SKELETON_POINT_HEAD = 6,

		SKELETON_POINT_LEFT_CLAVICLE = 7,
		SKELETON_POINT_LEFT_UPPER_ARM = 8,
		SKELETON_POINT_LEFT_FOREARM = 9,
		SKELETON_POINT_LEFT_HAND = 10,
		SKELETON_POINT_LEFT_THUMB_BASE = 11,
		SKELETON_POINT_LEFT_THUMB_END = 12,
		SKELETON_POINT_LEFT_FINGERS_BASE = 13,
		SKELETON_POINT_LEFT_FINGERS_END = 14,

		SKELETON_POINT_RIGHT_CLAVICLE = 15,
		SKELETON_POINT_RIGHT_UPPER_ARM = 16,
		SKELETON_POINT_RIGHT_FOREARM = 17,
		SKELETON_POINT_RIGHT_HAND = 18,
		SKELETON_POINT_RIGHT_THUMB_BASE = 19,
		SKELETON_POINT_RIGHT_THUMB_END = 20,
		SKELETON_POINT_RIGHT_FINGERS_BASE = 21,
		SKELETON_POINT_RIGHT_FINGERS_END = 22,

		SKELETON_POINT_LEFT_THIGH = 23,
		SKELETON_POINT_LEFT_CALF = 24,
		SKELETON_POINT_LEFT_FOOT = 25,

		SKELETON_POINT_RIGHT_THIGH = 26,
		SKELETON_POINT_RIGHT_CALF = 27,
		SKELETON_POINT_RIGHT_FOOT = 28,

		SKELETON_POINTS_MAX = 29,
	};

	enum AIStates {
		AI_STATE_OFF,
		AI_STATE_REST,
        AI_STATE_PATROL,
        AI_STATE_FOLLOW_PATH,
		AI_STATE_REGENERATE,
		AI_STATE_ATTACK,
	};

	enum EntityInteractionType {
		ENITIY_INTERACTION_TYPE_NORMAL,
		ENITIY_INTERACTION_TYPE_SPEAK,
		ENITIY_INTERACTION_TYPE_LOOT,
		ENITIY_INTERACTION_TYPE_USE,
		ENITIY_INTERACTION_TYPE_NONE,
	};

	enum EntityClassPlaystyleType {
		ENTITY_CLASS_PLAYSTYLE_TYPE_MELEE,
		ENTITY_CLASS_PLAYSTYLE_TYPE_SPELL,
		ENTITY_CLASS_PLAYSTYLE_TYPE_HYBRID,
		ENTITY_CLASS_PLAYSTYLE_TYPE_NONE,
	};

	enum {
		MAX_LEVEL = 50,
		BASE_XP = 50,
	};

	EntityEnums() {}

protected:
	static void _bind_methods();
};

VARIANT_ENUM_CAST(EntityEnums::EntityType);
VARIANT_ENUM_CAST(EntityEnums::EntityController);
VARIANT_ENUM_CAST(EntityEnums::EntityFlags);
VARIANT_ENUM_CAST(EntityEnums::EntityStateTypeFlags);
VARIANT_ENUM_CAST(EntityEnums::EntityStateTypeIndexes);
VARIANT_ENUM_CAST(EntityEnums::CharacterSkeletonPoints);
VARIANT_ENUM_CAST(EntityEnums::AIStates);
VARIANT_ENUM_CAST(EntityEnums::EntityImmunityFlags);
VARIANT_ENUM_CAST(EntityEnums::EntityInteractionType);
VARIANT_ENUM_CAST(EntityEnums::EntityClassPlaystyleType);

#endif
