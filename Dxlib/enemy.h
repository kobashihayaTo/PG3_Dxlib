#pragma once

class Enemy 
{
public:
	//���상���o�֐�
	void Func1();
	void Func2();

	void Update();
private:
	//�����o�֐��|�C���^
	static void (Enemy::* spFuncTable[])();
};