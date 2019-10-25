#ifndef CHARACTER_SKELETON_H
#define CHARACTER_SKELETON_H

#ifdef ENTITIES_2D
#include "scene/2d/node_2d.h"
#else
#include "scene/3d/spatial.h"
#endif

#include "core/node_path.h"
#include "core/ustring.h"
#include "scene/animation/animation_player.h"
#include "scene/animation/animation_tree.h"

#include "../data/character_skeleton_visual_entry.h"
#include "../entity_enums.h"

#include "../data/item_visual.h"

#ifdef ENTITIES_2D

class CharacterSkeleton : public Node2D {
	GDCLASS(CharacterSkeleton, Node2D);

#else

class CharacterSkeleton : public Spatial {
	GDCLASS(CharacterSkeleton, Spatial);

#endif

public:
	virtual void add_item_visual(Ref<ItemVisual> vis);
	virtual void remove_item_visual(Ref<ItemVisual> vis);
	virtual Ref<ItemVisual> get_item_visual();
	virtual int get_item_visual_count();
	virtual void clear_item_visuals();

	CharacterSkeleton();

protected:
	static void _bind_methods();

//private:
};


#endif
