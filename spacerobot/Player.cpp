#include "Player.h"


Player::Player() : Entity("res/blueships.png"), rot_speed(120)
{

}


Player::~Player()
{
}

void Player::rot(sf::Time elapsed, bool clockwise)
{
	if (clockwise) {
		rotate(rot_speed * elapsed.asSeconds());
	}
	else {
		rotate(- rot_speed * elapsed.asSeconds());
	}
}