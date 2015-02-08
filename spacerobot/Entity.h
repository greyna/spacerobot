#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class Entity : public sf::Sprite
{
private:
	sf::Texture texture;
public:
	Entity(std::string texture_file_name);
	virtual ~Entity();

	void draw(sf::RenderWindow &window);

};

