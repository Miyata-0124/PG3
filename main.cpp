#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 単方向リストの構造体
typedef struct Cell {
	char str[8];
	struct Cell* prev;
	struct Cell* next;
} Cell;

//データ追加の関数
void Create(Cell *head, const char *str);
//一覧表示の関数
void Index(Cell *head);
//削除の関数
void Delete(Cell* end);

int main() {
	char str[8];
	// 先頭のセル
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
			
				printf("[要素の操作]\n");
				printf("1.一覧表示\n");
				printf("2.要素の挿入\n");
				printf("3.要素の削除\n\n");
				printf("----------------\n");
				printf("選択したい番号を入力\n");
				scanf_s("%d", &scene);
				break;
			
			// 一覧用
			case 1:
			
				printf("[要素一覧]\n");
				Index(&head);
				printf("----------------\n");
				printf("0.初期に戻る\n");
				scanf_s("%d", &scene);

				break;
			
			// 挿入用
			case 2:
			
				printf("[要素の挿入]\n");
				printf("0.初期に戻る\n");
				scanf_s("%s\n", str, 8);
				Create(&head, str);
				printf("%sを最後尾に挿入\n", str);
				printf("----------------\n");
				printf("0.初期に戻る\n");
				scanf_s("%d", &scene);

				break;
			
			// 削除用
			case 3:
			
				Delete(&head);
				printf("----------------\n");
				printf("0.初期に戻る\n");
				scanf_s("%d", &scene);
				break;
		}
	}
	system("pause");
	return 0;
}

//データ追加の関数
void Create(Cell* head, const char *str)
{
	// 新規作成
	Cell *createCell;
	// メモリ確保
	createCell = (Cell*)malloc(sizeof(Cell));

	strcpy_s(createCell->str, 8, str);

	createCell->next = nullptr;

	// 最後尾を検索
	while (head->next != nullptr){
		head = head->next;
		createCell->prev = head;
	}

	// 最後尾にポインタを代入
	head->next = createCell;
}
// 一覧表示の関数
void Index(Cell* head)
{
	// 表示する
	int num = 0;
	while (head->next != nullptr)
	{
		head = head->next;
		printf("%s,", head->str);
		num++;
	}
	// 少しずらす
	printf("\n");
	printf("要素数:%d\n", num);
}

void Delete(Cell* end)
{
	while (end->next != nullptr)
	{
		end = end->next;
	}
	end->prev->next = nullptr;
	printf("最後尾を削除\n");
}
