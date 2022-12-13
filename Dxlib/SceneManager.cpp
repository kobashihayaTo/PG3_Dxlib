#include "SceneManager.h"

SceneManager* SceneManager::GetInstance()
{
	//関数内static変数として宣言する
	static SceneManager instance;
	return &instance;
}
