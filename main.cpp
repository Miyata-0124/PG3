#include <functional>

typedef void (*PFunc)(int*);

void RandomDigits(int* num) {
	srand(time(nullptr));
	int randNum = rand() % 6 + 1;

	if (randNum % 2 == *num)
	{
		printf("%d : 正解\n", randNum);
	}
	else
	{
		printf(" %d : 不正解\n", randNum);
	}
}

// 待ち時間設定 & 入力された値を渡す
void SetTime(std::function<int()>p, int second) {
	printf("抽選中...\n");
	Sleep(second * 1000);

	p();
}

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

	SetTime([answer]() {
		srand(time(nullptr));
	int randNum = rand() % 6 + 1;
	if (randNum % 2 == answer % 2)
	{
		printf("%d : 正解\n", randNum);
	}
	else
	{
		printf("%d : 不正解\n", randNum);
	}
	return 0;

		}, 3);

	return 0;
}