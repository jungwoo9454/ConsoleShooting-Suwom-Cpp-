#pragma once
class GameMng
{
public:
	GameMng();
	~GameMng();

	Player player;
	Bullet bullets[D_BULLET_MAX];

	void Update();
	void Draw();

	void CreateBullet(int x, int y);
	void CreateEnemy(int x, int y);
};