#ifndef ENTITY_CREATE_INFO_H
#define ENTITY_CREATE_INFO_H

#include "core/reference.h"
#include "core/ustring.h"
#include "../entity_enums.h"
#include "../entities/data/entity_data.h"

class EntityCreateInfo : public Reference {
	GDCLASS(EntityCreateInfo, Reference);

public:
	int get_guid() { return _guid; }
	void set_guid(int value) { _guid = value; }

	EntityEnums::EntityType get_entity_type() { return _entity_type; }
	void set_entity_type(EntityEnums::EntityType value) { _entity_type = value; }

	String get_player_name() { return _player_name; }
	void set_player_name(String value) { _player_name = value; }

	int get_level() { return _level; }
	void set_level(int value) { _level = value; }

	int get_xp() { return _xp; }
	void set_xp(int value) { _xp = value; }

	Ref<EntityData> get_entity_data() { return _entity_data; }
	void set_entity_data(Ref<EntityData> value) { _entity_data = value; }

protected:
	static void _bind_methods() {
		ClassDB::bind_method(D_METHOD("get_entity_type"), &EntityCreateInfo::get_entity_type);
		ClassDB::bind_method(D_METHOD("set_entity_type", "value"), &EntityCreateInfo::set_entity_type);
		ADD_PROPERTY(PropertyInfo(Variant::INT, "entity_type", PROPERTY_HINT_ENUM, "None, Player, AI, Mob"), "set_entity_type", "get_entity_type");

		ClassDB::bind_method(D_METHOD("get_player_name"), &EntityCreateInfo::get_player_name);
		ClassDB::bind_method(D_METHOD("set_player_name", "value"), &EntityCreateInfo::set_player_name);
		ADD_PROPERTY(PropertyInfo(Variant::STRING, "player_name"), "set_player_name", "get_player_name");

		ClassDB::bind_method(D_METHOD("get_level"), &EntityCreateInfo::get_level);
		ClassDB::bind_method(D_METHOD("set_level", "value"), &EntityCreateInfo::set_level);
		ADD_PROPERTY(PropertyInfo(Variant::STRING, "level"), "set_level", "get_level");

		ClassDB::bind_method(D_METHOD("get_xp"), &EntityCreateInfo::get_xp);
		ClassDB::bind_method(D_METHOD("set_xp", "value"), &EntityCreateInfo::set_xp);
		ADD_PROPERTY(PropertyInfo(Variant::STRING, "xp"), "set_xp", "get_xp");
		
		ClassDB::bind_method(D_METHOD("get_entity_data"), &EntityCreateInfo::get_entity_data);
		ClassDB::bind_method(D_METHOD("set_entity_data", "value"), &EntityCreateInfo::set_entity_data);
		ADD_PROPERTY(PropertyInfo(Variant::OBJECT, "entity_data", PROPERTY_HINT_RESOURCE_TYPE, "EntityData"), "set_entity_data", "get_entity_data");
	}

private:
	int _guid;
	EntityEnums::EntityType _entity_type;
	String _player_name;
	int _level;
	int _xp;

	Ref<EntityData> _entity_data;
};

#endif
