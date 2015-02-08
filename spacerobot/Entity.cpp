#include "Entity.h"
#include <stdexcpt.h>
#include <iostream>


Entity::Entity(std::string texture_file_name)
{
	if (!texture.loadFromFile(texture_file_name.c_str())) // , sf::IntRect(0, 0, 720, 720) to select a part of texture
	{
		std::cerr << "texture loading fail" << std::endl;
		throw std::exception("texture loading fail");
	}
	texture.setSmooth(true);
	//texture.setRepeated(true);

	setTexture(texture);
	//setTextureRect(sf::IntRect(0, 0, 720, 720)); // diplay part or more numerous of texture
	//setColor(sf::Color(200, 255, 200, 128)); // green half transparent

	setOrigin(getLocalBounds().width / 2, getLocalBounds().height / 2);
}


Entity::~Entity()
{
}
