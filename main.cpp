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

	//–â“š–³—p‚ÅÁ‚µ‚Ä‚È‚¢‚©Šm”F—p
	while (true)
	{
		printf("“G‚ğ“|‚·‚È‚ç 0 c‚·‚È‚ç 1 ‚ğ“ü—Í\n");
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
	// Å‰‚É“G‚Ì”‚ğo‚µ‚Ä‚¨‚­
	printf("\n");
	printf("‰Šú‚Ì“G”‚Í : ");
	cout << Enemy::enemyCount << endl;
	// 1‚Ì“G‚ÌAlive‚ªfalse‚É‚È‚Á‚½‚ç‘SˆõÁ‚¦‚é
	if (Enemy::isAlive == false)
	{
		delete enemy1;
		delete enemy2;
		delete enemy3;
	}
	// “G‚ª€‚ñ‚Å‚é‚È‚çenemyCount‚ª0‚É‚È‚é?
	printf("c‚è‚Ì“G”‚Í : ");
	cout << Enemy::enemyCount << endl;
	printf("\n\n");

	system("pause");
	return 0;
}