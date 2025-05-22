#include "include.h"

Player::Player()
{
	x = 60;
	y = 15;
	body = 'A';
	fColor = INTENSITY_WHITE;
	isAlive = true;
}

Player::~Player()
{
}

void Player::Update()
{
	Move();
	Clipping();
	FireBullet();
}

void Player::Move()
{
	if (GetAsyncKeyState('W') & 0x8000)
		y--;

	if (GetAsyncKeyState('A') & 0x8000)
		x--;

	if (GetAsyncKeyState('S') & 0x8000)
		y++;

	if (GetAsyncKeyState('D') & 0x8000)
		x++;
}

void Player::Clipping()
{
	if (x < 0)
		x = 0;
	if (x > 119)
		x = 119;
	if (y > 29)
		y = 29;
	if (y < 0)
		y = 0;

}

void Player::FireBullet()
{
	if (GetAsyncKeyState(VK_SPACE))
	{
		// GameMng::GetIns()->CreateBullet(x, y);
		// 
	}
}
