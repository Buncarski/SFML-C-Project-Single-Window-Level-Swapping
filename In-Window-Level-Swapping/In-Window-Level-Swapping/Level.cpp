#include "Level.h"

Level::Level()
{
	this->shape.setRadius(10.f);
	this->shape.setFillColor(sf::Color::Green);
}

Level::~Level()
{
}

void Level::Update()
{
}

void Level::Render(sf::RenderTarget* target)
{
	target->draw(this->shape);
}
