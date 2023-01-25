#include "Test.h"
#include <stdio.h>
SceneManager::SceneManager()
{
}

SceneManager::~SceneManager()
{
}

void SceneManager::ChangeScene(int sceneNo)
{
	printf("scene:%d\n", sceneNo);
	if (sceneNo == 0)
	{
		printf("Title\n\n");
	}
	if (sceneNo == 1)
	{
		printf("NewGame\n\n");
	}
	if (sceneNo == 2)
	{
		printf("GamePlay\n\n");
	}
	if (sceneNo == 3)
	{
		printf("GameClear\n\n");
	}
	else if (sceneNo > 4)
	{
		sceneNo = 0;
	}
}

SceneManager* SceneManager::GetInstance()
{
	static SceneManager instance;
	return &instance;
}
