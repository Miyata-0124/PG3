#pragma once

class Enemy 
{
private:

public:
	static int enemyCount;
	bool isAlive = true;
	Enemy() { enemyCount++; }
	~Enemy() { enemyCount--; }
};