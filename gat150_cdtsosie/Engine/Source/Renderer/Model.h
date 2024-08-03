#pragma once

#include "..//../Source/Renderer/Vector2.h"
#include "..//../Source/Renderer/Color.h"
#include "..//../Source/Renderer/Render.h"
#include "..//../Source/Renderer/Transform.h"
#include <vector>

class Model
{
public:
	Model() = default;
	Model(const std::vector<Vector2>& points, const Color& color) :
		m_points{ points },
		m_color{ color }
	{}
	void Draw(Renderer& render, const Vector2& position, float angle, float size);
	void Draw(Renderer& render, const Transform& transform);

	float GetRadius();
	//float GetRadius() { return (m_model) ? m_model->GetRadius() * m_transform.scale : 0; }

private:
	std::vector<Vector2> m_points;
	Color m_color;
};