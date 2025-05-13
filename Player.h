#pragma once
class Player
{
public:
	Player();
	~Player();

	int x;
	int y;
	char body;
	WORD fColor;
	WORD bColor;

	void Update();
	void Draw();

	void Move();
	void Clipping();
	void FireBullet();
};