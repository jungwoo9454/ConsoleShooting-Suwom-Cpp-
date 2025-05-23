#include "include.h"

Sound::Sound()
{
	sound = nullptr;
	channel = nullptr;
}

Sound::~Sound()
{

}


// 1. 공식문서
// 2. 인터넷 검색
bool Sound::LoadSound(std::string path, bool isloop)
{
	if (GameMng::GetIns()->system == nullptr)
		return false;

	FMOD_MODE mode = isloop ? FMOD_LOOP_NORMAL : FMOD_LOOP_OFF;

	FMOD_RESULT result = GameMng::GetIns()->system->createSound(path.c_str(), mode, nullptr, &sound);

	if (result != FMOD_OK)
		return false;

	return true;
}

void Sound::Play()
{
	if (sound && GameMng::GetIns()->system)
	{
		GameMng::GetIns()->system->playSound(sound, nullptr, false, &channel);
	}
}

void Sound::Stop()
{
	if (channel)
	{
		channel->stop();
	}
}
