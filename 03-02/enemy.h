#pragma once
#include <stdio.h>
#include <stdlib.h>

class Enemy
{
public:
	//死ぬ?生きる?
	void Juge();

public:

	//静的メンバ変数
	static bool isAlive;

};
