#include "include.h"

GameState::GameState()
{
	createEnemyTime = 0;
	score = 0;
}

GameState::~GameState()
{
	//for (int i = 0;i < bullets.size();i++)
	//	delete bullets[i];

	//for (int i = 0;i < enemys.size();i++)
	//	delete enemys[i];

	//for (int i = 0;i < effects.size();i++)
	//	delete effects[i];

	for (int i = 0;i < gameobjects.size();i++)
		delete gameobjects[i];
}

void GameState::Start()
{
	gameobjects.push_back(&player);
}

void GameState::Update()
{
	if (GetAsyncKeyState(VK_F2))
	{
		GameMng::GetIns()->statectrl.StateChange(new MenuState);
	}

	//for (int i = 0;i < bullets.size();i++)
	//	bullets[i]->Update();
	//for (int i = 0;i < enemys.size();i++)
	//	enemys[i]->Update();
	//for (int i = 0;i < effects.size();i++)
	//	effects[i]->Update();


	for (int i = 0;i < gameobjects.size();i++)
		gameobjects[i]->Update();

	
	if (createEnemyTime < GetTickCount())
	{
		createEnemyTime = GetTickCount() + 300;
		/*CreateEnemy(rand() % 120, 0);*/
		CreateObject(rand() % 120, 0, E_ENEMY);
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
	//for (int i = 0;i < bullets.size();i++)
	//	bullets[i]->Draw();
	//for (int i = 0;i < enemys.size();i++)
	//	enemys[i]->Draw();
	//for (int i = 0;i < effects.size();i++)
	//	effects[i]->Draw();

	text.Draw();

	for (int i = 0;i < gameobjects.size();i++)
		gameobjects[i]->Draw();
}

void GameState::Exit()
{
}

//void GameState::CreateBullet(int x, int y)
//{
//	GameMng::GetIns()->bulletfire.Play();
//
//	for (int i = 0;i < bullets.size();i++)
//	{
//		if (bullets[i]->isAlive == false)
//		{
//			bullets[i]->Enable(x, y);
//			return;
//		}
//	}
//
//	Bullet* bullet = new Bullet();
//	bullet->Enable(x, y);
//	bullets.push_back(bullet);
//}
//
//void GameState::CreateEnemy(int x, int y)
//{
//	for (int i = 0;i < enemys.size();i++)
//	{
//		if (enemys[i]->isAlive == false)
//		{
//			enemys[i]->Enable(x, y);
//			return;
//		}
//	}
//
//	Enemy* enemy = new Enemy();
//	enemy->Enable(x, y);
//	enemys.push_back(enemy);
//}
//
//void GameState::CreateEffect(int x, int y)
//{
//	for (int i = 0;i < effects.size();i++)
//	{
//		if (effects[i]->isAlive == false)
//		{
//			effects[i]->Enable(x, y);
//			return;
//		}
//	}
//
//	Effect* effect = new Effect();
//	effect->Enable(x, y);
//	effects.push_back(effect);
//}

void GameState::CreateObject(int x, int y, int id)
{
	for (int i = 0;i < gameobjects.size();i++)
	{
		if (gameobjects[i]->isAlive == false && gameobjects[i]->id == id)
		{
			gameobjects[i]->Enable(x, y);
			return;
		}
	}

	Unit* unit = GetCreateObject(id);
	unit->Enable(x, y);
	gameobjects.push_back(unit);
}

Unit* GameState::GetCreateObject(int id)
{
	Unit* unit = nullptr;

	switch (id)
	{
	case E_PLAYER:
		unit = new Player();
		break;
	case E_ENEMY:
		unit = new Enemy();
		break;
	case E_EFFECT:
		unit = new Effect();
		break;
	case E_BULLET:
		unit = new Bullet();
		break;
	}

	return unit;
}

void GameState::EnemyBulletCollision()
{
	//for (int i = 0;i < bullets.size();i++)
	//{
	//	if (bullets[i]->isAlive)
	//	{
	//		for (int j = 0;j < enemys.size();j++)
	//		{
	//			if (enemys[j]->isAlive &&
	//				bullets[i]->x == enemys[j]->x &&
	//				(bullets[i]->y == enemys[j]->y || bullets[i]->y - 1 == enemys[j]->y))
	//			{
	//				bullets[i]->Disable();
	//				enemys[j]->Disable();
	//				CreateEffect(enemys[j]->x, enemys[j]->y);
	//				score++;
	//				break;
	//			}
	//		}
	//	}
	//}
}
