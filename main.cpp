#include <stdio.h>
#include <iostream>
#include <list>
#include <vector>
#include "Enemy.h"
using namespace std;

int main() {
	int stateNo;
	Enemy* enemy = new Enemy;
	while (true)
	{
		//手動で確認する出来ていれば対応したものが出てくる?
		printf("行動制御が出来ているか確認する(0~2)\n");
		scanf_s("%d", &stateNo);
		//呼び出し
		enemy->Update(stateNo);
	}
	system("pause");
	return 0;
}