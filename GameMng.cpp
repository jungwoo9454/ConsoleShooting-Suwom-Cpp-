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

	system = nullptr;
	FMOD::System_Create(&system);
	system->init(512, FMOD_INIT_NORMAL, nullptr);

	// F5 - ����� ��� ����, ���� �ߴ������� �̾ ����
	// F10 - ���پ� ����
	// F11 - ���پ� ����(�Լ� ����)
	// F5 + Ctrl - ����� ��� ����

	// mp3 - ��������
	// wav - ���������
	bool result1 = background.LoadSound("Sound/backgroundMusic.mp3", true);
	bool result2 = bulletfire.LoadSound("Sound/bullet.wav", false);

	background.Play();

}

void GameMng::Update()
{
	statectrl.Update();
}

void GameMng::Draw()
{
	statectrl.Draw();
}