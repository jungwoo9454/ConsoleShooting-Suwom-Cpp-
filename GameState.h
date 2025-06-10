#pragma once
class GameState : public CState
{
public:
	GameState();
	~GameState();

	Player player;
	//std::vector<Bullet*> bullets;
	//std::vector<Enemy*> enemys;
	//std::vector<Effect*> effects;
	Text text;

	int score;
	DWORD createEnemyTime;

	// dynamic_cast<Player*>(a)
	std::vector<Unit*> gameobjects;

	void Start();
	void Update();
	void Draw();
	void Exit();

	//void CreateBullet(int x, int y);
	//void CreateEnemy(int x, int y);
	//void CreateEffect(int x, int y);

	void CreateObject(int x, int y, int id);
	Unit* GetCreateObject(int id);

	void EnemyBulletCollision();
};