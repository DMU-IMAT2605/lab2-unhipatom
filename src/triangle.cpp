#include <triangle.h>

triangle::triangle(sf::Vector2f triangleCentre, int triangleHeight) : shape(4)
{
	Centre = triangleCentre;
	height = triangleHeight;
	makeShape();
}

triangle::~triangle()
{

}

void triangle::makeShape()
{
	point1.x = Centre.x;
	point1.y = Centre.y - (height / 2);

	point2.x = Centre.x + (height / 2);
	point2.y = Centre.y + (height / 2);

	point3.x = Centre.x - (height / 2);
	point3.y = Centre.y + (height / 2);

	pointsArray[0] = point1;
	pointsArray[1] = point2;
	pointsArray[2] = point3;
	pointsArray[3] = point1;
}