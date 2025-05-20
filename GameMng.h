#pragma once

// Singleton
// FSM(유한상태기계)
// FMOD(음악 재생 라이브러리)
// 자료구조(스택, 큐, 리스트)
// 오브젝트 풀링 업그레이드(리스트, 동적할당)

class GameMng : public Singleton<GameMng>
{
public:
	GameMng();
	~GameMng();

	Player player;
	Bullet bullets[D_BULLET_MAX];
	Enemy enemys[D_ENEMY_MAX];
	Effect effects[D_EFFECT_MAX];
	Text text;

	int score;

	DWORD createEnemyTime;

	void Update();
	void Draw();

	void CreateBullet(int x, int y);
	void CreateEnemy(int x, int y);
	void CreateEffect(int x, int y);

	void EnemyBulletCollision();
};