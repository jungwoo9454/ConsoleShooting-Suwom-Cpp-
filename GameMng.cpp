#include "include.h"

GameMng::GameMng()
{
}

GameMng::~GameMng()
{
}

void GameMng::Update()
{
	player.Update();
	for (int i = 0;i < D_BULLET_MAX;i++)
		bullets[i].Update();
}

void GameMng::Draw()
{
	player.Draw();
	for (int i = 0;i < D_BULLET_MAX;i++)
		bullets[i].Draw();
}

void GameMng::CreateBullet(int x, int y)
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
