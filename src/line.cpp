#include <line.h>

line::line(int x1, int y1, int x2, int y2) : shape(2)
{
	xPossition1 = x1;
	yPossition1 = y1;
	xPossition2 = x2;
	yPossition2 = y2;
	makeShape();
}

line::~line()
{

}

void line::makeShape()
{
	pointsArray[0] = sf::Vector2f(xPossition1, yPossition1);
	pointsArray[1] = sf::Vector2f(xPossition2, yPossition2);
}