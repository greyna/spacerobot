#pragma once
#include "Entity.h"
#include "Player.h"

class Shoot :
	public Entity
{
private:
	bool shooting;
public:
	Shoot();
	virtual ~Shoot();
	bool isShooting() { return shooting; };
	void launch(Player p);
};

