#pragma once

// Singleton
// FSM(유한상태기계)
// FMOD(음악 재생 라이브러리)
// API, 라이브러리, 프레임워크, 툴(Tool)
// 자료구조(스택, 큐, 리스트)
// 오브젝트 풀링 업그레이드(리스트, 동적할당)

class GameMng : public Singleton<GameMng>
{
public:
	GameMng();
	~GameMng();

	FMOD::System* system;

	Sound background;
	Sound bulletfire;

	CStateCtrl statectrl;

	void Init();
	void Update();
	void Draw();


};