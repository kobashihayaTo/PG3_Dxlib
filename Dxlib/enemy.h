#pragma once

class Enemy 
{
public:
	//���상���o�֐�
	void proximity();
	void shooting();
	void elimination();

	void Update();
private:
	//�����o�֐��|�C���^
	static void (Enemy::* spFuncTable[])();
};