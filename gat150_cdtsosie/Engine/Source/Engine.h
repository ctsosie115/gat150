#pragma once

#include "Audio/Audio.h"

#include "Input/Input.h"

#include "FrameWork/Scene.h"

#include "Math/MathUTIS.h"
#include "Math/Random.h"

#include "Core/CTime.h"
#include "Core/EFile.h"
#include "Core/Ensert.h"

#include "Renderer/Color.h"
#include "Renderer/Font.h"
#include "Renderer/Model.h"
#include "Renderer/Particle.h"
#include "Renderer/Particle_System.h"
#include "Renderer/Render.h"
#include "Renderer/Transform.h"
#include "Renderer/Vector2.h"

#include <memory>
#include <cassert>

class Engine {

public:
	Engine() = default;
	~Engine() = default;

	bool Initialize();
	void Shutdown() const;

	void Update();

	Renderer GetRenderer() const { return *m_renderer; }
	Input GetInput() const { return *m_input; }
	Audio GetAudio() const { return *m_audio; }
	Time GetTime() const { return *m_time; }
	ParticleSystem& GetPS() const { return *m_particlesystem; }
	bool IsQuit() const { return quit; }

public:
	bool quit{ false };
	std::unique_ptr<Time> m_time;

	std::unique_ptr<Renderer> m_renderer;
	std::unique_ptr<Input> m_input;
	std::unique_ptr<Audio> m_audio;

	std::unique_ptr<ParticleSystem> m_particlesystem;
};

//Engine extern g_engine;
