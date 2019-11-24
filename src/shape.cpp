#include <iostream>
#include <shape.h>

using namespace std;

shape::shape(int nV)
{
	n = nV;
	pointsArray.setPrimitiveType(sf::LinesStrip);
	pointsArray.resize(n);
}

shape::~shape()
{

}

void shape::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(pointsArray);
}