#pragma once
#include <SFML/Graphics.hpp>
#include <shape.h>

class line : public shape
{
public:
	line(int x1, int y1, int x2, int y2);
	~line();

protected:
	int xPossition1;
	int yPossition1;
	int xPossition2;
	int yPossition2;
	void makeShape();
};