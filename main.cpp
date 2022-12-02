#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// �P�������X�g�̍\����
typedef struct Cell {
	char num[8];
	struct Cell* next;
} Cell;

//�f�[�^�ǉ��̊֐�
void Create(Cell *head, const char *num);
//�ꗗ�\���̊֐�
void Index(Cell *head);

int main() {
	char num[8];
	// �擪�̃Z��
	Cell head;
	head.next = nullptr;																																																																																																																																																																																																																																																																																																																																																																																																																																																																																
	
	while (true) {
		printf("�D���Ȓl����� : ");

		scanf_s("%s", num, 8);

		Create(&head, num);

		Index(&head);
	}
	system("pause");
	return 0;
}

//�f�[�^�ǉ��̊֐�
void Create(Cell* head, const char *num)
{
	// �V�K�쐬
	Cell *createCell;
	// �������m��
	createCell = (Cell*)malloc(sizeof(Cell));

	strcpy_s(createCell->num, 8, num);

	createCell->next = nullptr;

	// �Ō��������
	while (head->next!=nullptr){
		head = head->next;
	}

	// �Ō���Ƀ|�C���^����
	head->next = createCell;
}
// �ꗗ�\���̊֐�
void Index(Cell* head)
{
	// �\������
	while (head->next != nullptr)
	{
		head = head->next;
		printf("%s,", head->num);
	}
	// �������炷
	printf("\n");
}
