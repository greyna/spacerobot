#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Background.h"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1024, 768), "Lonely robot lost in space...");
	Player player;
	Background background;
	player.move(500, 500);
	player.scale(0.1, 0.1);

	sf::Event event;
	sf::Clock clock;

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		sf::Time elapsed = clock.restart();

		player.rot(elapsed, true);
		

		window.clear();
		window.draw(background);
		window.draw(player);
		window.display();
	}

	return 0;
}