#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Background.h"
#include "Shoot.h"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1024, 768), "Lonely robot lost in space...");
	Player player;
	Background background;
	Shoot shoot;
	player.move(500, 500);
	player.scale(0.1, 0.1);
	player.getRotation();

	sf::Event event;
	sf::Clock clock;

	while (window.isOpen())
	{
		sf::Time elapsed = clock.restart();

		// Events and keyboard
		while (window.pollEvent(event))
		{
			switch (event.type) {
			case sf::Event::Closed:
				window.close();
				break;

			case sf::Event::KeyPressed:
				switch (event.key.code) {
				case sf::Keyboard::Escape:
					window.close();

				default:
					break;
				}

			default:
				break;
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			player.rot(elapsed, false);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			player.rot(elapsed, true);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			shoot.launch(player);
		}


		window.clear();
		window.draw(background);
		window.draw(player);
		if (shoot.isShooting())
			window.draw(shoot);
		window.display();
	}

	return 0;
}