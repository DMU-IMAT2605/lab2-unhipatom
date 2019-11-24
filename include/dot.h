#pragma once
#include <SFML/Graphics.hpp>
#include <shape.h>

class dot : public shape
{
public:
	dot(sf::Vector2f dPos);
	~dot();

protected:
	sf::Vector2f dotPossition;
	void makeShape();
};