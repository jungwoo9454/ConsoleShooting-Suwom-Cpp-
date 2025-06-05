#pragma once
class GameState : public CState
{
public:
	GameState();
	~GameState();

	Player player;
	std::vector<Bullet*> bullets;
	std::vector<Enemy*> enemys;
	std::vector<Effect*> effects;
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