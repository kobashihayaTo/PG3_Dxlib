#include "SceneManager.h"

SceneManager* SceneManager::GetInstance()
{
	//�֐���static�ϐ��Ƃ��Đ錾����
	static SceneManager instance;
	return &instance;
}
