#include <dot.h>

dot::dot(sf::Vector2f dPos) : shape(1)
{
	dotPossition = dPos;
	makeShape();
}

dot::~dot()
{

}

void dot::makeShape()
{
	pointsArray[0] = dotPossition;
}