#include "enemy.h"

//
void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::proximity,//接近
	&Enemy::shooting,//射撃
	&Enemy::elimination//離脱
};

void Enemy::proximity(){

}

void Enemy::shooting(){

}

void Enemy::elimination(){

}

void Enemy::Update() {
	//現在フェーズの関数を実行
	
	//行列を更新
	static_cast<size_t>(phase_);
	//デバック用表示

}