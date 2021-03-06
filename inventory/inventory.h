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

#ifndef INVENTORY_H
#define INVENTORY_H

#include "core/reference.h"
#include "core/vector.h"

#include "../item_enums.h"

class Player;
class itemTemplate;
class ItemInstance;

class Inventory : public Reference {
	GDCLASS(Inventory, Reference);

public:
	int get_allowed_item_types() const;
	void set_allowed_item_types(const int value);

	Player *get_target() const;
	void set_target(Player *caster);
	void set_target_bind(Node *caster);

	Inventory();
	~Inventory();

protected:
	static void _bind_methods();

private:
	Player *_target;
	int _allowed_item_types;
};

#endif
