#pragma once
#include <SFML/Graphics.hpp>

class shape : public sf::Drawable
{
public:
	shape(int numPoints);
	~shape();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
protected:
	sf::VertexArray pointsArray;
	int n;
	virtual void makeShape() = 0;
};