#pragma once

class CStateCtrl
{
public:
	CState* m_pCurState;			// ���� state
	CState* temp;
public:
	CStateCtrl();
	~CStateCtrl();

public:
	bool StateChange(CState* state);

public:
	void Update();
	void Draw();
};