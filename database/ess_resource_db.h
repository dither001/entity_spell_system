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

#ifndef ESS_RESOURCE_DB_H
#define ESS_RESOURCE_DB_H

#include "core/resource.h"

#include "core/array.h"
#include "core/engine.h"
#include "core/hash_map.h"
#include "core/io/json.h"
#include "core/variant.h"
#include "core/vector.h"

#include "core/ustring.h"
#include "scene/main/node.h"

#include "core/bind/core_bind.h"

#include "../item_enums.h"

#include "../data/entities/xp_data.h"

#include "core/version.h"

#if VERSION_MAJOR >= 4
#define PoolStringArray PackedStringArray

#define POOL_STRING_ARRAY PACKED_STRING_ARRAY
#endif

class Aura;
class Spell;
class EntityData;
class CraftRecipe;
class ItemTemplate;
class EntityResourceData;
class EntitySkillData;
class EntityCreateInfo;
class SpellCastInfo;
class EntitySpeciesData;

class ESSResourceDB : public Resource {
	GDCLASS(ESSResourceDB, Resource);

public:
	bool get_automatic_load() const;
	void set_automatic_load(const bool load);

	bool get_load_folders() const;
	void set_load_folders(const bool load);

	Ref<Aura> get_skill_for_armor_type(const int index);
	void set_skill_for_armor_type(const int index, const Ref<Aura> &aura);

	String get_xp_data_path();
	void set_xp_data_path(String path);
	Ref<XPData> get_xp_data();

	PoolStringArray get_folders() const;
	void set_folders(const PoolStringArray &folders);

	Ref<EntityResourceData> get_entity_resource(int class_id);
	Ref<EntityResourceData> get_entity_resource_index(int index);
	int get_entity_resource_count();
	void add_entity_resource(const Ref<EntityResourceData> &cls);
	Vector<Variant> get_entity_resources() const;
	void set_entity_resources(const Vector<Variant> &data);

	Ref<EntitySkillData> get_entity_skill(int class_id);
	Ref<EntitySkillData> get_entity_skill_index(int index);
	int get_entity_skill_count();
	void add_entity_skill(const Ref<EntitySkillData> &cls);
	Vector<Variant> get_entity_skills() const;
	void set_entity_skills(const Vector<Variant> &data);

	Ref<EntityData> get_entity_data(int class_id);
	Ref<EntityData> get_entity_data_index(int index);
	int get_entity_data_count();
	void add_entity_data(const Ref<EntityData> &cls);
	Vector<Variant> get_entity_datas() const;
	void set_entity_datas(const Vector<Variant> &data);

	Ref<Spell> get_spell(int spell_id);
	Ref<Spell> get_spell_index(int index);
	int get_spell_count();
	void add_spell(const Ref<Spell> &spell);
	Vector<Variant> get_spells() const;
	void set_spells(const Vector<Variant> &data);

	Ref<Aura> get_aura(int aura_id);
	Ref<Aura> get_aura_index(int index);
	int get_aura_count();
	void add_aura(const Ref<Aura> &aura);
	Vector<Variant> get_auras() const;
	void set_auras(const Vector<Variant> &data);

	Ref<CraftRecipe> get_craft_recipe(int craft_id);
	Ref<CraftRecipe> get_craft_recipe_index(int index);
	int get_craft_recipe_count();
	void add_craft_recipe(const Ref<CraftRecipe> &aura);
	Vector<Variant> get_craft_recipes() const;
	void set_craft_recipes(const Vector<Variant> &data);

	void add_item_template(const Ref<ItemTemplate> &aura);
	Ref<ItemTemplate> get_item_template(int item_id);
	Ref<ItemTemplate> get_item_template_index(int index);
	int get_item_template_count();
	Vector<Variant> get_item_templates() const;
	void set_item_templates(const Vector<Variant> &data);

	void add_entity_species_data(const Ref<EntitySpeciesData> &aura);
	Ref<EntitySpeciesData> get_entity_species_data(int item_id);
	Ref<EntitySpeciesData> get_entity_species_data_index(int index);
	int get_entity_species_data_count();
	Vector<Variant> get_entity_species_datas() const;
	void set_entity_species_datas(const Vector<Variant> &data);

	void load_all();
	void load_xp_data();
	void load_folders();
	void load_folder(const String &folder);
	void add_resource(const Ref<Resource> &resource);

	Ref<Resource> load_resource(const String &path, const String &type_hint = "");

	ESSResourceDB();
	~ESSResourceDB();

protected:
	static void _bind_methods();

private:
	String _xp_data_path;
	Ref<XPData> _xp_data;

	PoolStringArray _folders;

	Vector<Ref<EntityResourceData>> _entity_resources;
	HashMap<int, Ref<EntityResourceData>> _entity_resource_map;

	Vector<Ref<EntitySkillData>> _entity_skills;
	HashMap<int, Ref<EntitySkillData>> _entity_skill_map;

	Vector<Ref<EntityData>> _entity_datas;
	HashMap<int, Ref<EntityData>> _entity_data_map;

	Vector<Ref<Spell>> _spells;
	HashMap<int, Ref<Spell>> _spell_map;

	Vector<Ref<Aura>> _auras;
	HashMap<int, Ref<Aura>> _aura_map;

	Vector<Ref<CraftRecipe>> _craft_recipes;
	HashMap<int, Ref<CraftRecipe>> _craft_recipe_map;

	Vector<Ref<ItemTemplate>> _item_templates;
	HashMap<int, Ref<ItemTemplate>> _item_template_map;

	Vector<Ref<EntitySpeciesData>> _entity_species_datas;
	HashMap<int, Ref<EntitySpeciesData>> _entity_species_data_map;

	Ref<Aura> _armor_type_skills[ItemEnums::ARMOR_TYPE_MAX];

	bool _automatic_load;
	bool _load_folders;
};

#endif
