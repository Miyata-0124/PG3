#include <stdio.h>
#include <iostream>
#include <list>
#include <vector>
#include "Enemy.h"
using namespace std;

int Enemy::enemyCount;

int main() {
	int selection;
	Enemy* enemy1 = new Enemy;
	Enemy* enemy2 = new Enemy;
	Enemy* enemy3 = new Enemy;

	while (true)
	{
		printf("�G��|���Ȃ� 0 �c���Ȃ� 1 �����\n");
		scanf_s("%d", &selection);
		break;
	}

	if (selection == 0)
	{
		enemy1->isAlive = false;
	}
	else
	{
		enemy1->isAlive = true;
	}
	// �ŏ��ɓG�̐����o���Ă���
	printf("\n");
	printf("�����̓G���� : ");
	cout << Enemy::enemyCount << endl;
	// 1�̓G��Alive��false�ɂȂ�����S��������
	if (enemy1->isAlive == false)
	{
		delete enemy1;
		delete enemy2;
		delete enemy3;
	}
	// �G������ł�Ȃ�enemyCount��0�ɂȂ�?
	printf("�c��̓G���� : ");
	cout << Enemy::enemyCount << endl;
	printf("\n\n");

	system("pause");
	return 0;
}