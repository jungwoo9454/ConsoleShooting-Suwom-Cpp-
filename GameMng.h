#pragma once

// Singleton
// FSM(���ѻ��±��)
// FMOD(���� ��� ���̺귯��)
// �ڷᱸ��(����, ť, ����Ʈ)
// ������Ʈ Ǯ�� ���׷��̵�(����Ʈ, �����Ҵ�)

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