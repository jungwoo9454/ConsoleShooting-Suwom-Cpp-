#include "include.h"

char ebody[3][3][3] =
{
	{//ebody[0][0][0] ~ ebody[0][2][2]
		{' ', ' ', ' '},
		{' ', '*', ' '},
		{' ', ' ', ' '}
	},
	{//ebody[1][0][0] ~ ebody[1][2][2]
		{' ', '*', ' '},
		{'*', '*', '*'},
		{' ', '*', ' '}
	},
	{//ebody[2][0][0] ~ ebody[2][2][2]
		{'*', ' ', '*'},
		{' ', '*', ' '},
		{'*', ' ', '*'}
	}
};

Effect::Effect()
{
	index = 0;
	indexUpdateTime = 0;

	fColor = YELLOW;
}

Effect::~Effect()
{
}

void Effect::Update()
{
	if (isAlive && indexUpdateTime < GetTickCount())
	{
		index++;
		indexUpdateTime = GetTickCount() + 300;

		if (index >= 3)
			Disable();
	}
}

void Effect::Draw()
{
	if (isAlive)
	{
		DrawChar(x - 1, y - 1, ebody[index][0][0], fColor, bColor);
		DrawChar(x, y - 1, ebody[index][0][1], fColor, bColor);
		DrawChar(x + 1, y - 1, ebody[index][0][2], fColor, bColor);

		DrawChar(x - 1, y, ebody[index][1][0], fColor, bColor);
		DrawChar(x, y, ebody[index][1][1], fColor, bColor);
		DrawChar(x + 1, y, ebody[index][1][2], fColor, bColor);

		DrawChar(x - 1, y + 1, ebody[index][2][0], fColor, bColor);
		DrawChar(x, y + 1, ebody[index][2][1], fColor, bColor);
		DrawChar(x + 1, y + 1, ebody[index][2][2], fColor, bColor);
	}
}

void Effect::Enable(int x, int y)
{
	Unit::Enable(x, y);
	index = 0;
	indexUpdateTime = GetTickCount() + 300;
}
