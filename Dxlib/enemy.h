#pragma once

class Enemy 
{
public:
	//自作メンバ関数
	void Func1();
	void Func2();

	void Update();
private:
	//メンバ関数ポインタ
	static void (Enemy::* spFuncTable[])();
};