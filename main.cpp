#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 単方向リストの構造体
typedef struct Cell {
	char num[8];
	struct Cell* next;
} Cell;

//データ追加の関数
void Create(Cell *head, const char *num);
//一覧表示の関数
void Index(Cell *head);

int main() {
	char num[8];
	// 先頭のセル
	Cell head;
	head.next = nullptr;																																																																																																																																																																																																																																																																																																																																																																																																																																																																																
	
	while (true) {
		printf("好きな値を入力 : ");

		scanf_s("%s", num, 8);

		Create(&head, num);

		Index(&head);
	}
	system("pause");
	return 0;
}

//データ追加の関数
void Create(Cell* head, const char *num)
{
	// 新規作成
	Cell *createCell;
	// メモリ確保
	createCell = (Cell*)malloc(sizeof(Cell));

	strcpy_s(createCell->num, 8, num);

	createCell->next = nullptr;

	// 最後尾を検索
	while (head->next!=nullptr){
		head = head->next;
	}

	// 最後尾にポインタを代入
	head->next = createCell;
}
// 一覧表示の関数
void Index(Cell* head)
{
	// 表示する
	while (head->next != nullptr)
	{
		head = head->next;
		printf("%s,", head->num);
	}
	// 少しずらす
	printf("\n");
}
