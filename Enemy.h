#pragma once

class Enemy 
{
private:

public:
	static int enemyCount;
	static bool isAlive;
	Enemy() { enemyCount++; }
	~Enemy() { enemyCount--; }
};