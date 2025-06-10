#include "Include.h"


CStateCtrl::CStateCtrl()
{
	m_pCurState = nullptr;
	temp = nullptr;
}

CStateCtrl::~CStateCtrl()
{

}

bool CStateCtrl::StateChange(CState* state)
{
	CState* pState = state;

	if (pState != NULL)
	{
		if (m_pCurState != NULL)
		{
			m_pCurState->Exit();
			/*delete m_pCurState;*/
		}
		temp = state;
		//m_pCurState = pState;
		//m_pCurState->Start();
		return true;
	}
	else
	{
		return false;
	}
}

void CStateCtrl::Update()
{
	if (temp != nullptr)
	{
		if (m_pCurState != nullptr)
			delete m_pCurState;

		m_pCurState = temp;
		m_pCurState->Start();
		temp = nullptr;
	}

	if (m_pCurState != NULL)
	{
		m_pCurState->Update();	
	}

}

void CStateCtrl::Draw()
{
	if (m_pCurState != NULL)
	{
		m_pCurState->Draw();
	}
}