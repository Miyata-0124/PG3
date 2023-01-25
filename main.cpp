#include <stdio.h>
#include <iostream>
#include <list>
#include <vector>
#include "Test.h"
using namespace std;

int main() {
	int sceneNo = 0;
	while (true)
	{
		//インスタンスの取得
		SceneManager* scene = SceneManager::GetInstance();
		//使用
		scene->ChangeScene(sceneNo);
		sceneNo += 1;
		if (sceneNo == 4)
		{
			sceneNo = 0;
		}
		system("pause");
	}
	return 0;
}