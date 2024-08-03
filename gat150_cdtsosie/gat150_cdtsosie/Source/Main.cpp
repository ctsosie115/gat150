#include "..//..//Engine/Source/Engine.h"

#include <iostream>
#include <cstdlib>
#include <vector>

std::unique_ptr<Engine> engine = std::make_unique<Engine>();
int main(int argc, char* argv[])
{
	//Initialize()
	engine->Initialize();

	std::cout << __FILE__ << std::endl; 

	File::SetFilePath("Assets");

	std::cout << File::GetFilePath() << std::endl;
	;
	//Background Music
	engine->GetAudio().PlaySound("dragon_background_music.wav");

	//music timer
	float music_time = 0.0f;

	while (!engine->IsQuit())
	{
		//Update
		engine->Update();

		//Begin Frame
		engine->GetRenderer().SetColor(0, 0, 0, 0);
		engine->GetRenderer().BeginFrame();

		//Music Loop
		music_time += 0.01f;
		if (music_time >= 12.5f) {
			engine->GetAudio().PlaySound("dragon_background_music.wav");
			music_time = 0;
		}
		//Draw
		engine->GetPS().Draw(*engine->m_renderer);

		//End Frame
		engine->GetRenderer().EndFrame();
	}
	engine->Shutdown();

	return 0;
}