#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <list>
using namespace std;

// �o�������X�g�̍\����
typedef struct Cell {
	int val;
	struct Cell* prev;
	struct Cell* next;

} Cell;

//�f�[�^�ǉ��̊֐�
void Create(Cell *currentCell,int val);
//�ꗗ�\���̊֐�
void Index(Cell *endCell);
//�A�h���X�擾�p
Cell* GetInsertCellAddress(Cell * endCell,int iterator);

int main() {
	//�擪�Z���̐錾
	Cell head;
	head.next = nullptr;
	head.prev = nullptr;

	// �錾
	list<int> operater{ };
	list<int>::iterator itr;

	printf("[�v�f�̑���]\n");
	printf("1. �v�f�\��\n2. �v�f�̑}��\n3. �v�f�̕ҏW\n4. �v�f�̍폜\n5. �v�f�̕��ёւ�\n");
	printf("-----------------------\n");

	
	
	//int iterator;
	//int inputValue;
	//Cell* insertCell;

	////�擪�Z���̐錾
	//Cell head;
	//head.next = nullptr;
	//head.prev = nullptr;

	//while (1) {
	//	printf("�����̌��ɑ}�����܂����H\n");
	//	scanf_s("%d", &iterator);

	//	printf("�l����͂���������\n");
	//	scanf_s("%d", &inputValue);

	//	insertCell = GetInsertCellAddress(&head, iterator);
	//	Create(insertCell, inputValue);

	//	Index(&head);
	//}
	system("pause");
	return 0;
}

//�f�[�^�ǉ��̊֐�
void Create(Cell* currentCell, int val)
{
	// �V�K�쐬
	Cell* createCell;
	// �������m��
	createCell = (Cell*)malloc(sizeof(Cell));
	createCell->val = val;
	createCell->prev = currentCell;
	createCell->next = currentCell->next;
	
	if (currentCell->next) {
		Cell* nextCell = currentCell->next;
		nextCell->prev = createCell;
	}
	currentCell->next = createCell;
}
// �ꗗ�\���̊֐�
void Index(Cell* endCell)
{
	int no = 1;
	// �\������
	while (endCell->next != nullptr)
	{
		endCell = endCell->next;
		printf("%d", no);
		printf("%p", endCell->prev);
		printf("%5d", endCell->val);
		printf("(%p)", endCell);
		printf("%p\n", endCell->next);
		no++;
	}
	// �������炷
	printf("\n");
}

Cell* GetInsertCellAddress(Cell* endCell, int iterator)
{
	for (int i = 0; i < iterator; i++)
	{
		if (endCell->next) {
			endCell = endCell->next;
		}
		else
		{
			break;
		}
	}
	return endCell;
}
