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

	//問答無用で消してないか確認用
	while (true)
	{
		printf("敵を倒すなら 0 残すなら 1 を入力\n");
		scanf_s("%d", &selection);
		break;
	}
	//仮にenemy1(　<-は変更可能 1,2,3　)が死んだ場合
	if (selection == 0)
	{
		enemy1->isAlive = false;
	}
	else
	{
		enemy1->isAlive = true;
	}
	// 最初に敵の数を出しておく
	printf("\n");
	printf("初期の敵数は : ");
	cout << Enemy::enemyCount << endl;

	// 1の敵のAliveがfalseになったら全員消える
	if (Enemy::isAlive == false)
	{
		delete enemy1;
		delete enemy2;
		delete enemy3;
	}

	// 敵が死んでるならenemyCountが0になる?
	printf("残りの敵数は : ");
	cout << Enemy::enemyCount << endl;
	printf("\n\n");

	system("pause");
	return 0;
}