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

#ifndef AURA_DATA_H
#define AURA_DATA_H

#include "core/array.h"
#include "core/dictionary.h"
#include "core/resource.h"

#include "../../spell_enums.h"

class Aura;
class Entity;

class AuraData : public Resource {
	GDCLASS(AuraData, Resource);

public:
	int get_aura_id();
	void set_aura_id(int value);

	bool get_is_timed();
	void set_is_timed(bool value);

	float get_remaining_time();
	void set_remaining_time(float value);
	bool update(float delta);

	Entity *get_owner();
	void set_owner(Entity *value);
	void set_owner_bind(Node *value);

	Entity *get_caster();
	void set_caster(Entity *value);
	void set_caster_bind(Node *value);

	NodePath get_caster_path();
	void set_caster_path(NodePath value);

	float get_spell_scale();
	void set_spell_scale(float value);

	Ref<Aura> get_aura();
	void set_aura(Ref<Aura> aura);

	void refresh(float remaining);

	int get_damage();
	void set_damage(int value);

	float get_damage_count();
	void set_damage_count(int damageTaken);

	float get_tick();
	void set_tick(float value);

	float get_time_since_last_tick();
	void set_time_since_last_tick(float value);

	int get_unhandled_ticks();
	void set_unhandled_ticks(int value);

	int get_damage_taken();
	void set_damage_taken(int value);

	int get_heal();
	void set_heal(int value);

	int get_remaining_absorb();
	void set_remaining_absorb(int remaining_timeAbsorb);

	float get_slow();
	void set_slow(float value);

	void resolve_references(Node *owner);
	Dictionary to_dict();
	void from_dict(const Dictionary &dict);
	Dictionary _to_dict();
	void _from_dict(const Dictionary &dict);

	Array to_send_array();
	void from_send_array(const Array &arr);
	Array _to_send_array();
	void _from_send_array(const Array &arr);

	AuraData();

protected:
	static void _bind_methods();

private:
	Entity *_owner;
	int _aura_id;
	StringName _aura_path;
	float _remaining_time;
	Entity *_caster;
	NodePath _caster_path;
	float _spell_scale;
	int _aura_group;
	Ref<Aura> _aura;

	bool _is_timed;
	int _damage;
	int _heal;
	float _slow;
	int _remaining_absorb;
	float _tick;
	float _time_since_last_tick;
	int _damage_already_taken;
	int _unhandled_ticks;
};

#endif
