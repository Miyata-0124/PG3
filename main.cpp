#include <stdio.h>
#include <iostream>
#include <list>
#include <vector>
#include "Enemy.h"
using namespace std;

int Enemy::enemyCount;
bool Enemy::isAlive;

int main() {
	int selection;
	Enemy* enemy1 = new Enemy;
	Enemy* enemy2 = new Enemy;
	Enemy* enemy3 = new Enemy;

	//�ⓚ���p�ŏ����ĂȂ����m�F�p
	while (true)
	{
		printf("�G��|���Ȃ� 0 �c���Ȃ� 1 �����\n");
		scanf_s("%d", &selection);
		break;
	}

	if (selection == 0)
	{
		enemy2->isAlive = false;
	}
	else
	{
		enemy2->isAlive = true;
	}
	// �ŏ��ɓG�̐����o���Ă���
	printf("\n");
	printf("�����̓G���� : ");
	cout << Enemy::enemyCount << endl;
	// 1�̓G��Alive��false�ɂȂ�����S��������
	if (Enemy::isAlive == false)
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