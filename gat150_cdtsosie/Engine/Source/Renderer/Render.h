#pragma once

#include <string>
#include <SDL.h>
#include <SDL_ttf.h>

class Renderer
{
public:
	Renderer() = default;

	bool Iitialize();
	void Shutdown();
	bool CreateWindow(std::string title, int width, int theight);
	void BeginFrame();
	void EndFrame();

	void SetColor(uint8_t r, uint8_t g, uint8_t b, uint8_t a);
	void DrawLine(int x1, int y1, int x2, int y2);
	void DrawLine(float x1, float y1, float x2, float y2);
	void DrawPoint(int x1, int y1);
	void DrawPoint(float x1, float y1);
	void DrawRect(int x, int y, int w, int h);
	void DrawRect(float x, float y, float  w, float h);

	int GetWidth() const { return m_width; }
	int GetHeight() const { return m_height; }

	SDL_Renderer* GetRenderer() { return m_renderer; }

private:
	SDL_Window* m_window{ nullptr };
	SDL_Renderer* m_renderer{ nullptr };

	int m_width = 0;
	int m_height = 0;
};