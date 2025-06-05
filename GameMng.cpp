#include "include.h"

GameMng::GameMng()
{

}

GameMng::~GameMng()
{
}

void GameMng::Init()
{
	statectrl.StateChange(new MenuState);

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
	system->update();
}

void GameMng::Draw()
{
	statectrl.Draw();
}