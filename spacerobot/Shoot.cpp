#include "Shoot.h"


Shoot::Shoot() : Entity("res/shoot.png"), shooting(false)
{
	rotate(180);
}


Shoot::~Shoot()
{
}

void Shoot::launch(Player p)
{
	shooting = true;

	setOrigin(getLocalBounds().width, getLocalBounds().height / 2);
	setPosition(p.getPosition() + sf::Vector2f(-p.getGlobalBounds().width*0.1 + p.getGlobalBounds().width / 2, 0));
	
	//setOrigin(sf::Vector2f(p.getGlobalBounds().width*0.1 - p.getGlobalBounds().width / 2, 0));
	//rotate(p.getRotation());
}