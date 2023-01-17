#include "enemy.h"

//
void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Func1,
	&Enemy::Func2
};

void Enemy::Update() {
	//現在フェーズの関数を実行
	(this->*stateTable[static_cast<size_t>(state)])();
}