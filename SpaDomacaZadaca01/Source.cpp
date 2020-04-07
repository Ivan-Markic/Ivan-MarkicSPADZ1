#include <SFML/Graphics.hpp>
#include "Cvijet.h"
#include <iostream>
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Bili Cvitak");
	window.setFramerateLimit(60);
	Cvijet cvijet(&window);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();

		cvijet.draw();

		window.display();

	}

	return 0;
}