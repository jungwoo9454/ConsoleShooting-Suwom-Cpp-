#include "include.h"

Unit::Unit()
{
	x = 0;
	y = 0;
	body = ' ';
	fColor = INTENSITY_WHITE;
	bColor = BLACK;
	isAlive = false;

	id = -1;
}

Unit::~Unit()
{
}

void Unit::Update()
{
}

void Unit::Draw()
{
	if (isAlive)
		DrawChar(x, y, body, fColor, bColor);
}

void Unit::Enable(int x, int y)
{
	this->x = x;
	this->y = y;
	isAlive = true;
}

void Unit::Disable()
{
	isAlive = false;
}
