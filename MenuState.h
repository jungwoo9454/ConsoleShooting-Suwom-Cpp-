#pragma once
class MenuState : public CState
{
public:
	MenuState();
	~MenuState();

	void Start();
	void Update();
	void Draw();
	void Exit();
};