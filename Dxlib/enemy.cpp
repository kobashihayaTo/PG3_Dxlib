#include "enemy.h"

//
void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::proximity,//�ڋ�
	&Enemy::shooting,//�ˌ�
	&Enemy::elimination//���E
};

void Enemy::proximity(){

}

void Enemy::shooting(){

}

void Enemy::elimination(){

}

void Enemy::Update() {
	//���݃t�F�[�Y�̊֐������s
	
	//�s����X�V
	static_cast<size_t>(phase_);
	//�f�o�b�N�p�\��

}