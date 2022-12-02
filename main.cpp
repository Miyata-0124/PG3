#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// �P�������X�g�̍\����
typedef struct Cell {
	char str[8];
	struct Cell* prev;
	struct Cell* next;
} Cell;

//�f�[�^�ǉ��̊֐�
void Create(Cell *head, const char *str);
//�ꗗ�\���̊֐�
void Index(Cell *head);
//�폜�̊֐�
void Delete(Cell* end);

int main() {
	char str[8];
	// �擪�̃Z��
	Cell head;
	head.next = nullptr;

	int scene = 0;;
	
	Create(&head, "banana\n");
	Create(&head, "apple\n");
	Create(&head, "orange\n");

	while (true) 
	{
		switch (scene)
		{
			case 0:
			
				printf("[�v�f�̑���]\n");
				printf("1.�ꗗ�\��\n");
				printf("2.�v�f�̑}��\n");
				printf("3.�v�f�̍폜\n\n");
				printf("----------------\n");
				printf("�I���������ԍ������\n");
				scanf_s("%d", &scene);
				break;
			
			// �ꗗ�p
			case 1:
			
				printf("[�v�f�ꗗ]\n");
				Index(&head);
				printf("----------------\n");
				printf("0.�����ɖ߂�\n");
				scanf_s("%d", &scene);

				break;
			
			// �}���p
			case 2:
			
				printf("[�v�f�̑}��]\n");
				printf("0.�����ɖ߂�\n");
				scanf_s("%s\n", str, 8);
				Create(&head, str);
				printf("%s���Ō���ɑ}��\n", str);
				printf("----------------\n");
				printf("0.�����ɖ߂�\n");
				scanf_s("%d", &scene);

				break;
			
			// �폜�p
			case 3:
			
				Delete(&head);
				printf("----------------\n");
				printf("0.�����ɖ߂�\n");
				scanf_s("%d", &scene);
				break;
		}
	}
	system("pause");
	return 0;
}

//�f�[�^�ǉ��̊֐�
void Create(Cell* head, const char *str)
{
	// �V�K�쐬
	Cell *createCell;
	// �������m��
	createCell = (Cell*)malloc(sizeof(Cell));

	strcpy_s(createCell->str, 8, str);

	createCell->next = nullptr;

	// �Ō��������
	while (head->next != nullptr){
		head = head->next;
		createCell->prev = head;
	}

	// �Ō���Ƀ|�C���^����
	head->next = createCell;
}
// �ꗗ�\���̊֐�
void Index(Cell* head)
{
	// �\������
	int num = 0;
	while (head->next != nullptr)
	{
		head = head->next;
		printf("%s,", head->str);
		num++;
	}
	// �������炷
	printf("\n");
	printf("�v�f��:%d\n", num);
}

void Delete(Cell* end)
{
	while (end->next != nullptr)
	{
		end = end->next;
	}
	end->prev->next = nullptr;
	printf("�Ō�����폜\n");
}
