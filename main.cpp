#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <functional>

typedef void (*PFunc)(int*);

int main(void) {
	// ユーザ入力
	int answer;
	while (true)
	{
		printf("偶数なら0,奇数なら1を入力してください\n");
		scanf_s("%d", &answer); //値の入力をしてもらう
		if (answer == 0 || answer == 1) //入力された値が指定したものか確認
		{
			break;
		}
		else //違うなら返す
		{
			printf("0か1かを入力してください\n");
		}
	}

	// 待ち時間設定 & 入力された値を渡す
	std::function<void(std::function<void()>p, int second)>SetTimer = [=](std::function<void()>p, int second) {
		printf("抽選中...\n"); //分かりやすく文字を描画
		Sleep(second * 1000); //設定した値を入れて秒数セット

		p();
	};

	// 正解,不正解の判断
	std::function<void()>RandomDigits = [answer]() {
		//乱数の取得
		srand(time(nullptr));
		int randNum = rand() % 6 + 1;
		// 判定 同じ値なら正解とする
		if (randNum % 2 == answer)
		{
			printf("正解");
		}
		else
		{
			printf("不正解");
		}
	};
	
	SetTimer(RandomDigits, 3);

	return 0;
}