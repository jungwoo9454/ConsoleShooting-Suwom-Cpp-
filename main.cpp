#include "include.h"

int main()
{
	Init();

	while (true)
	{
		Update();
		Draw();

		EngineSync(30);
	}

	Release();

	return 0;
}