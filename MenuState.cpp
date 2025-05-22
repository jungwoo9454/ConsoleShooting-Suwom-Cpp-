#include "include.h"

MenuState::MenuState()
{
}

MenuState::~MenuState()
{
}

void MenuState::Start()
{
}

void MenuState::Update()
{
	if (GetAsyncKeyState(VK_F1))
	{
		GameMng::GetIns()->statectrl.StateChange(E_GAME);
	}
}

void MenuState::Draw()
{
	DrawStr(10, 10, "MenuState", WHITE, BLACK);
}

void MenuState::Exit()
{
}
