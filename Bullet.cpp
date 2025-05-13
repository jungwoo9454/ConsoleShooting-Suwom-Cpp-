#include "include.h"

Bullet::Bullet()
{
	x = 0;
	y = 0;
	body = '|';
	fColor = GREEN;
	bColor = BLACK;
	isAlive = false;
}

Bullet::~Bullet()
{
}

void Bullet::Update()
{
	if (isAlive)
	{
		Move();
		Clipping();
	}
}

void Bullet::Draw()
{
	if (isAlive)
		DrawChar(x, y, body, fColor, bColor);
}

void Bullet::Move()
{
	y--;
}

void Bullet::Clipping()
{
	if (y < 0)
		Disable();
}

void Bullet::Enable(int x, int y)
{
	this->x = x;
	this->y = y;
	isAlive = true;
}

void Bullet::Disable()
{
	isAlive = false;
}
