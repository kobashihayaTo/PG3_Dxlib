#include "enemy.h"

//
void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Func1,
	&Enemy::Func2
};

void Enemy::Update() {
	//���݃t�F�[�Y�̊֐������s
	(this->*stateTable[static_cast<size_t>(state)])();
}