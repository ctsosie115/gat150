#include "..//../Source/FrameWork/Actor.h"

#include "..//../Source/Renderer/Model.h"

void Actor::Update(float dt)
{
	//check for lifespan
	if (m_lifespan != 0)
	{
		m_lifespan -= dt;
		if (m_lifespan <= 0) {
			m_destoryed = true;
		}
	}

	m_transfrom.position += (m_velocity * dt);
	m_velocity *= 1.0f / (1.0f + m_dampling * dt);
}

void Actor::Draw(Renderer& renderer)
{
	if (m_destoryed) return;

	if (m_model)
	{
		m_model->Draw(renderer, m_transfrom);
	}
}
