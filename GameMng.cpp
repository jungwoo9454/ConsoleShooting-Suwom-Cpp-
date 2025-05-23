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

	system = nullptr;
	FMOD::System_Create(&system);
	system->init(512, FMOD_INIT_NORMAL, nullptr);

	// F5 - 디버그 모드 실행, 다음 중단점까지 이어서 실행
	// F10 - 한줄씩 실행
	// F11 - 한줄씩 실행(함수 내부)
	// F5 + Ctrl - 디버그 모드 종료

	// mp3 - 압축파일
	// wav - 비압축파일
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