#include "Enemy.h"
#include <stdio.h>

void Enemy::Move()
{
	printf("�ڋߒ�!\n");
}

void Enemy::Shot()
{
	printf("�ˌ���!\n");
}

void Enemy::ReMove()
{
	printf("���E��\n");
}

void Enemy::Update(int i)
{
	if (i >= 3)
	{
		i = 0;
	}
	//�|�C���^���Ăяo���Ď��s
	(this->*state[i])();
}

void (Enemy::* Enemy::state[])() = {
	&Enemy::Move,	// 0
	&Enemy::ReMove,	// 1
	&Enemy::Shot	// 2
};
