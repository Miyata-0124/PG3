#include <stdio.h>
#include <stdlib.h>

// �P�������X�g�̍\����
typedef struct Cell {
	int num;
	struct Cell* next;
} Cell;

//�f�[�^�ǉ��̊֐�
void Create(Cell *head, int num);
//�ꗗ�\���̊֐�
void Index(Cell *head);

int main() {
	int num;
	// �擪�̃Z��
	Cell head;
	head.next = nullptr;																																																																																																																																																																																																																																																																																																																																																																																																																																																																																
	
	while (true) {
		printf("�D���Ȓl����� : ");

		scanf_s("%d", &num);

		Create(&head, num);

		Index(&head);
	}
	system("pause");
	return 0;
}

//�f�[�^�ǉ��̊֐�
void Create(Cell* head, int num)
{
	// �V�K�쐬
	Cell *createCell;
	// �������m��
	createCell = (Cell*)malloc(sizeof(Cell));

	createCell->num = num;
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
		printf("%d,", head->num);
	}
	// �������炷
	printf("\n");
}
