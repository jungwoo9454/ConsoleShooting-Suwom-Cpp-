#include "include.h"

Bullet::Bullet()
{
	body = '|';
	fColor = GREEN;
	id = E_BULLET;
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

void Bullet::Move()
{
	y--;
}

void Bullet::Clipping()
{
	if (y < 0)
		Disable();
}