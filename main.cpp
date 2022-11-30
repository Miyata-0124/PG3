#include <stdio.h>
#include <stdlib.h>

// 単方向リストの構造体
typedef struct Cell {
	int num;
	struct Cell* next;
} Cell;

//データ追加の関数
void Create(Cell *head, int num);
//一覧表示の関数
void Index(Cell *head);

int main() {
	int num;
	// 先頭のセル
	Cell head;
	head.next = nullptr;																																																																																																																																																																																																																																																																																																																																																																																																																																																																																
	
	while (true) {
		printf("好きな値を入力 : ");

		scanf_s("%d", &num);

		Create(&head, num);

		Index(&head);
	}
	system("pause");
	return 0;
}

//データ追加の関数
void Create(Cell* head, int num)
{
	// 新規作成
	Cell *createCell;
	// メモリ確保
	createCell = (Cell*)malloc(sizeof(Cell));

	createCell->num = num;
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
		printf("%d,", head->num);
	}
	// 少しずらす
	printf("\n");
}
