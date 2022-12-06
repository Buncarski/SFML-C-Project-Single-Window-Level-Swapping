#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class Level
{
private:
	sf::CircleShape shape;

public:
	Level();
	virtual ~Level();

	void Update();
	void Render(sf::RenderTarget* target);
};

