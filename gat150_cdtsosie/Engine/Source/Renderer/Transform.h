#pragma once

#include "..//../Source/Renderer/Vector2.h"

struct Transform
{
	Vector2 position;
	float rotation;
	float scale;

	Transform(Vector2 position, float rotation = 0, float scale = 1) :
		position{ position },
		rotation{ rotation },
		scale{ scale }
	{}
};