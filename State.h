#pragma once
//FSM - 유한상태기계
// 하나의 상태를 실행
// 걷기, 달리기, 앉기


// 상태 클래스^^
class CState
{
public:
	int			m_nStateIndex;		// 현재 State 인덱스
	CState*		m_pCurState;		// 현재 State 포인터(자기자신)

public:
	CState();
	~CState();

public:
	virtual void Start() = 0;	//순수가상함수
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Exit() = 0;

};