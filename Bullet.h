#pragma once
class Bullet : public Unit
{
public:
	Bullet();
	~Bullet();

	void Update() override;

	void Move();
	void Clipping();
};