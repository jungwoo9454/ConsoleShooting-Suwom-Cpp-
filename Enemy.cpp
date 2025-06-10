#include "include.h"

Enemy::Enemy()
{
	fColor = RED;
	bColor = RED;
	id = E_ENEMY;
}

Enemy::~Enemy()
{
}

void Enemy::Update()
{
	if (isAlive)
	{
		Move();
		Clipping();
	}
}

void Enemy::Move()
{
	y++;
}

void Enemy::Clipping()
{
	if (y > 29)
		Disable();
}
