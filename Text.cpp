#include "include.h"

Text::Text()
{
	str = "SCORE:" + std::to_string(10);
	isAlive = true;
}

Text::~Text()
{
}

void Text::Draw()
{
	if (isAlive)
		DrawStr(x, y, str.c_str(), fColor, bColor);
}
