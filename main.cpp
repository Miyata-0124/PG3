#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <list>
using namespace std;

// 双方向リストの構造体
typedef struct Cell {
	int val;
	char str[8];
	struct Cell* prev;
	struct Cell* next;

} Cell;

//データ追加の関数
void Create(Cell *currentCell,int val);
//一覧表示の関数
void Index(Cell *endCell);
//アドレス取得用
Cell* GetInsertCellAddress(Cell * endCell,int iterator);

int main() {

	int iterator;
	int inputValue;
	Cell* insertCell;

	int scene = 0;
	int control = 0;

	//先頭セルの宣言
	Cell head;
	head.next = nullptr;
	head.prev = nullptr;
	while (true)
	{
		switch (scene)
		{
			// 初期画面
		case 0:
			printf("[要素の操作]\n");
			printf("1.表示\n");
			printf("2.挿入\n");
			printf("3.編集\n");
			printf("4.削除\n");
			printf("5.並び替え\n");
			printf("-----------\n\n");
			printf("操作選択\n");
			scanf_s("%d", &scene);
			break;
			// 表示
		case 1:
			switch (control)
			{
			case 0:
				printf("[要素の表示]\n");
				printf("1.一覧表示\n");
				printf("2.順番を指定して要素を表示\n");
				printf("0.要素操作に戻る\n");
				scanf_s("%d", control);
				break;
			case 1:
				printf("[要素一覧]\n");
				Index(&head);
				printf("----------------\n");
				printf("0.初期に戻る\n");
				scanf_s("%d", &control);
				break;
			case 2:
				break;
			}
			
			break;
			// 挿入
		case 2:
			break;
			// 編集
		case 3:
			break;
			// 削除
		case 4:
			break;
			// 並び替え
		case 5:
			break;
		}
	}
	
	//while (1) {
	//	printf("何処の後ろに挿入しますか？\n");
	//	scanf_s("%d", &iterator);

	//	printf("値を入力しください\n");
	//	scanf_s("%d", &inputValue);

	//	insertCell = GetInsertCellAddress(&head, iterator);
	//	Create(insertCell, inputValue);

	//	Index(&head);
	//}
	system("pause");
	return 0;
}

//データ追加の関数
void Create(Cell* currentCell, int val)
{
	// 新規作成
	Cell* createCell;
	// メモリ確保
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
// 一覧表示の関数
void Index(Cell* endCell)
{
	// 表示する
	int num = 0;
	while (endCell->next != nullptr)
	{
		endCell = endCell->next;
		printf("%s,", endCell->str);
		num++;
	}
	// 少しずらす
	printf("\n");
	printf("要素数:%d\n", num);
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
