#pragma once
class Effect : public Unit
{
public:
	Effect();
	~Effect();

	int index;
	DWORD indexUpdateTime;

	void Update() override;
	void Draw() override;

	void Enable(int x, int y) override;
};