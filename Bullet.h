#pragma once
class Bullet
{
public:
	Bullet();
	~Bullet();

	int x;
	int y;
	char body;
	WORD fColor;
	WORD bColor;
	bool isAlive;

	void Update();
	void Draw();

	void Move();
	void Clipping();

	void Enable(int x, int y);
	void Disable();
};