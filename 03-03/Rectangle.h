#pragma once
#include "Shape.h"

class Rectangle : public IShape
{
public:		//メンバ関数
	//面積の計算
	void size() override;

	//面積の値の描画
	void draw() override;

private:	//メンバ変数
	//縦
	int y = 5;

	//横
	int x = 8;

	//答えを入れる変数
	int ans = 0;
};