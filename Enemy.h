#pragma once
class Enemy : public Unit
{
public:
	Enemy();
	~Enemy();

	void Update() override;

	void Move();
	void Clipping();
};