#pragma once
#include "SFML\Graphics.hpp"


class Input
{
public:
	Input();
	~Input();
	void consumeEvent(sf::Event &event);
};

