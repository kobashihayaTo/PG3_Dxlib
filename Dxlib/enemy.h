#pragma once

class Enemy 
{
public:
	Enemy();
	~Enemy();

	void IsAlive();
	void SetDeath();

	void Update();
	void Draw();

public:
	static bool isAllDead;

public:

	bool isAlive;
};