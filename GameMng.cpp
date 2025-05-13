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
}

void GameMng::Draw()
{
	player.Draw();
}

void GameMng::CreateBullet(int x, int y)
{
}
