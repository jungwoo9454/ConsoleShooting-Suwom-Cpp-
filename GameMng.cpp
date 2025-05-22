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
	// 업 캐스팅 - 자식 클래스가 부모 클래스로 형변환
	// 다운 캐스팅 - 부모 클래스가 자식 클래스로 형변환
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