#include <functional>

typedef void (*PFunc)(int*);

void RandomDigits(int* num) {
	srand(time(nullptr));
	int randNum = rand() % 6 + 1;

	if (randNum % 2 == *num)
	{
		printf("%d : ����\n", randNum);
	}
	else
	{
		printf(" %d : �s����\n", randNum);
	}
}

// �҂����Ԑݒ� & ���͂��ꂽ�l��n��
void SetTime(std::function<int()>p, int second) {
	printf("���I��...\n");
	Sleep(second * 1000);

	p();
}

int main(void) {
	// ���[�U����
	int answer;
	while (true)
	{
		printf("�����Ȃ�0,��Ȃ�1����͂��Ă�������\n");
		scanf_s("%d", &answer); //�l�̓��͂����Ă��炤
		if (answer == 0 || answer == 1) //���͂��ꂽ�l���w�肵�����̂��m�F
		{
			break;
		}
		else //�Ⴄ�Ȃ�Ԃ�
		{
			printf("0��1������͂��Ă�������\n");
		}
	}

	SetTime([answer]() {
		srand(time(nullptr));
	int randNum = rand() % 6 + 1;
	if (randNum % 2 == answer % 2)
	{
		printf("%d : ����\n", randNum);
	}
	else
	{
		printf("%d : �s����\n", randNum);
	}
	return 0;

		}, 3);

	return 0;
}