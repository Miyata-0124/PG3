#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <functional>

typedef void (*PFunc)(int*);

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

	// �҂����Ԑݒ� & ���͂��ꂽ�l��n��
	std::function<void(std::function<void()>p, int second)>SetTimer = [=](std::function<void()>p, int second) {
		printf("���I��...\n"); //������₷��������`��
		Sleep(second * 1000); //�ݒ肵���l�����ĕb���Z�b�g

		p();
	};

	// ����,�s�����̔��f
	std::function<void()>RandomDigits = [answer]() {
		//�����̎擾
		srand(time(nullptr));
		int randNum = rand() % 6 + 1;
		// ���� �����l�Ȃ琳���Ƃ���
		if (randNum % 2 == answer)
		{
			printf("����");
		}
		else
		{
			printf("�s����");
		}
	};
	
	SetTimer(RandomDigits, 3);

	return 0;
}