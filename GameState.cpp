#include "include.h"

GameState::GameState()
{
	createEnemyTime = 0;
	score = 0;
}

GameState::~GameState()
{
}

void GameState::Start()
{
}

void GameState::Update()
{
	if (GetAsyncKeyState(VK_F2))
	{
		GameMng::GetIns()->statectrl.StateChange(E_MENU);
	}

	player.Update();
	for (int i = 0;i < D_BULLET_MAX;i++)
		bullets[i].Update();
	for (int i = 0;i < D_ENEMY_MAX;i++)
		enemys[i].Update();
	for (int i = 0;i < D_EFFECT_MAX;i++)
		effects[i].Update();
	
	if (createEnemyTime < GetTickCount())
	{
		createEnemyTime = GetTickCount() + 300;
		CreateEnemy(rand() % 120, 0);
	}

	text.str = "SCORE:" + std::to_string(score);
	EnemyBulletCollision();

	//std::ostringstream os;
	//os << score;
	//os << 10;
	//os << 'A';
	//os << "ABCD";

	//text.str = os.str();
}

void GameState::Draw()
{
	player.Draw();
	for (int i = 0;i < D_BULLET_MAX;i++)
		bullets[i].Draw();
	for (int i = 0;i < D_ENEMY_MAX;i++)
		enemys[i].Draw();
	for (int i = 0;i < D_EFFECT_MAX;i++)
		effects[i].Draw();

	text.Draw();
}

void GameState::Exit()
{
}

void GameState::CreateBullet(int x, int y)
{
	for (int i = 0;i < D_BULLET_MAX;i++)
	{
		if (bullets[i].isAlive == false)
		{
			bullets[i].Enable(x, y);
			break;
		}
	}
}

void GameState::CreateEnemy(int x, int y)
{
	for (int i = 0;i < D_ENEMY_MAX;i++)
	{
		if (enemys[i].isAlive == false)
		{
			enemys[i].Enable(x, y);
			break;
		}
	}
}

void GameState::CreateEffect(int x, int y)
{
	for (int i = 0;i < D_EFFECT_MAX;i++)
	{
		if (effects[i].isAlive == false)
		{
			effects[i].Enable(x, y);
			break;
		}
	}
}

void GameState::EnemyBulletCollision()
{
	for (int i = 0;i < D_BULLET_MAX;i++)
	{
		if (bullets[i].isAlive)
		{
			for (int j = 0;j < D_ENEMY_MAX;j++)
			{
				if (enemys[j].isAlive &&
					bullets[i].x == enemys[j].x &&
					(bullets[i].y == enemys[j].y || bullets[i].y - 1 == enemys[j].y))
				{
					bullets[i].Disable();
					enemys[j].Disable();
					CreateEffect(enemys[j].x, enemys[j].y);
					score++;
					break;
				}
			}
		}
	}
}
