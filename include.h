#include <stdio.h>
#include <Windows.h>	//win32 API
#include <time.h>
#include "Define.h"
#include <string>
#include <sstream>
#include <fmod.hpp>
//#include <list>		// 이중 연결 리스트
#include <vector>	// 동적배열

#include "Singleton.h"

#include "Unit.h"

#include "State.h"
#include "StateCtrl.h"

#include "Player.h"
#include "Bullet.h"
#include "Enemy.h"
#include "Effect.h"
#include "Text.h"
#include "Sound.h"

#include "MenuState.h"
#include "GameState.h"

#include "GameMng.h"

void Init();
void Update();
void Draw();
void Release();

void DrawStr(int x, int y, const char* str, WORD fcolor, WORD bcolor);
void DrawChar(int x, int y, const char c, WORD fcolor, WORD bcolor);
void EngineSync(int fps);
void ClearScreen();
void Flip();
