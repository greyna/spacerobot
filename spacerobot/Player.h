#pragma once
#include "Entity.h"

class Player :
	public Entity
{
private:
	float rot_speed;
public:
	void rot(sf::Time elapsed, bool clockwise);
	Player();
	virtual ~Player();
};

