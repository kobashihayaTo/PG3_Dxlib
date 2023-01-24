#pragma once

class Enemy 
{
public:
	//自作メンバ関数
	void proximity();
	void shooting();
	void elimination();

	void Update();
private:
	//メンバ関数ポインタ
	static void (Enemy::* spFuncTable[])();
};