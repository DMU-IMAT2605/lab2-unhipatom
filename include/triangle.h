#pragma once
#include <SFML/Graphics.hpp>
#include <shape.h>

class triangle : public shape
{
public:
	triangle(sf::Vector2f triangleCentre, int triangleHeight);
	~triangle();

protected:
	sf::Vector2f Centre;
	sf::Vector2f point1;
	sf::Vector2f point2;
	sf::Vector2f point3;
	int height;
	void makeShape();
};