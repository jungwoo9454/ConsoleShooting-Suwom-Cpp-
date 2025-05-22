#pragma once

// Singleton
// FSM(���ѻ��±��)
// FMOD(���� ��� ���̺귯��)
// �ڷᱸ��(����, ť, ����Ʈ)
// ������Ʈ Ǯ�� ���׷��̵�(����Ʈ, �����Ҵ�)

class GameMng : public Singleton<GameMng>
{
public:
	GameMng();
	~GameMng();

	CStateCtrl statectrl;

	void Init();
	void Update();
	void Draw();


};