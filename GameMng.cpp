#include "include.h"

GameMng::GameMng()
{

}

GameMng::~GameMng()
{
}

void GameMng::Init()
{
	GameState* p = new GameState();
	// �� ĳ���� - �ڽ� Ŭ������ �θ� Ŭ������ ����ȯ
	// �ٿ� ĳ���� - �θ� Ŭ������ �ڽ� Ŭ������ ����ȯ
	statectrl.StateAdd(E_MENU, new MenuState);
	statectrl.StateAdd(E_GAME, new GameState);

	statectrl.StateChange(E_MENU);
}

void GameMng::Update()
{
	statectrl.Update();
}

void GameMng::Draw()
{
	statectrl.Draw();
}