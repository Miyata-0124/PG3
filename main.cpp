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
		//�C���X�^���X�̎擾
		SceneManager* scene = SceneManager::GetInstance();
		//�g�p
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