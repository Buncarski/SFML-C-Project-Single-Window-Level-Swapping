#pragma once
#include "Level.h"

class Game
{
private:
	//Attributes
	sf::RenderWindow* gameWindow;
	sf::Event ev;

	Level* level;

	void initWindow();
	void initLevel();

public:
	//Constructor and destructor
	Game();
	virtual ~Game();

	//
	const bool windowOpened() const;

	//Functions
	void Run();

	void UpdateEventPolls();
	void Update();
	void Render();


};

