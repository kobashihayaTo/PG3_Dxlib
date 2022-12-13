#include "SceneManager.h"

SceneManager* SceneManager::GetInstance()
{
	//ŠÖ”“àstatic•Ï”‚Æ‚µ‚ÄéŒ¾‚·‚é
	static SceneManager instance;
	return &instance;
}
