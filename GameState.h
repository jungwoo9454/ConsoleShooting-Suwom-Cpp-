#pragma once
class GameState : public CState
{
public:
	GameState();
	~GameState();

	Player player;
	Bullet bullets[D_BULLET_MAX];
	Enemy enemys[D_ENEMY_MAX];
	Effect effects[D_EFFECT_MAX];
	Text text;

	int score;

	DWORD createEnemyTime;

	void Start();
	void Update();
	void Draw();
	void Exit();

	void CreateBullet(int x, int y);
	void CreateEnemy(int x, int y);
	void CreateEffect(int x, int y);

	void EnemyBulletCollision();
};