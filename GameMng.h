#pragma once

// Singleton
// FSM(���ѻ��±��)
// FMOD(���� ��� ���̺귯��)
// API, ���̺귯��, �����ӿ�ũ, ��(Tool)
// �ڷᱸ��(����, ť, ����Ʈ)
// ������Ʈ Ǯ�� ���׷��̵�(����Ʈ, �����Ҵ�)

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