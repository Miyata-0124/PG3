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
		//�蓮�Ŋm�F����o���Ă���ΑΉ��������̂��o�Ă���?
		printf("�s�����䂪�o���Ă��邩�m�F����(0~2)\n");
		scanf_s("%d", &stateNo);
		//�Ăяo��
		enemy->Update(stateNo);
	}
	system("pause");
	return 0;
}