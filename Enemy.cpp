#include "Enemy.h"
#include <stdio.h>

void Enemy::Move()
{
	printf("接近中!\n");
}

void Enemy::Shot()
{
	printf("射撃中!\n");
}

void Enemy::ReMove()
{
	printf("離脱中\n");
}

void Enemy::Update(int i)
{
	if (i >= 3)
	{
		i = 0;
	}
	//ポインタを呼び出して実行
	(this->*state[i])();
}

void (Enemy::* Enemy::state[])() = {
	&Enemy::Move,	// 0
	&Enemy::ReMove,	// 1
	&Enemy::Shot	// 2
};
