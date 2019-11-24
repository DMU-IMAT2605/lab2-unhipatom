/*! \mainpage Lab 2 - Shapes
*
* This program gives you a basic SFML winow in which to draw your shapes.
*
* The classes and files you use are up to you.  
*
* This software froms the basis of your submission for lab book 1
*/

/*! \file main.cpp
* \brief Main file for the application
*
* Contains the entry point of the application 
*/

#include <SFML/Graphics.hpp>
#include <shape.h>
#include <dot.h>
#include <line.h>
#include <triangle.h>



int main() //!< Entry point for the application
{
	sf::RenderWindow window(sf::VideoMode(1024, 800), "Lab Book 1 - Shapes");
	window.setFramerateLimit(60);

	dot dot(sf::Vector2f(100, 100));
	line line(300, 20, 500, 60);
	triangle triangle(sf::Vector2f(900, 600), 100);
	

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear(sf::Color::Black);

		window.draw(dot);
		window.draw(line);
		window.draw(triangle);
		


		window.display();
	}
}
