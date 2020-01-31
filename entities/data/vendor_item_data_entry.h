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

#ifndef VENDOR_ITEM_DATA_ENTRY_H
#define VENDOR_ITEM_DATA_ENTRY_H

#include "core/resource.h"

class ItemTemplate;

class VendorItemDataEntry : public Resource {
	GDCLASS(VendorItemDataEntry, Resource);

public:
	Ref<ItemTemplate> get_item();
	void set_item(Ref<ItemTemplate> item);

	int get_item_price() const;
	void set_item_price(int value);

	int get_item_count() const;
	void set_item_count(int value);

	int get_item_spawn_time() const;
	void set_item_spawn_time(int time);

	VendorItemDataEntry();
	~VendorItemDataEntry();

protected:
	static void _bind_methods();

private:
	Ref<ItemTemplate> _item;
	int _item_price;
	int _item_count;
	int _item_spawn_time;
};

#endif
