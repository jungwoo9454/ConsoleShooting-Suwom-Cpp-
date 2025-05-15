#pragma once
// UML
class Unit
{
public:
	Unit();
	~Unit();

	int x;
	int y;
	char body;
	WORD fColor;
	WORD bColor;
	bool isAlive;

	virtual void Update();
	virtual void Draw();

	virtual void Enable(int x, int y);
	void Disable();
};