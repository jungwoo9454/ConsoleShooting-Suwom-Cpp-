#pragma once
class GameMng
{
public:
	GameMng();
	~GameMng();

	Player player;

	void Update();
	void Draw();

	void CreateBullet(int x, int y);
};