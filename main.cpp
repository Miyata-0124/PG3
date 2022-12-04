#include <stdio.h>
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {

	// 宣言 駅名用list(char型)
	// 駅名追加
	list<const char*> station{
	"Tokyo",		// 1 begin
	"Kanda",		// 2
	"Akibahara",	// 3
	"Okachimachi",	// 4
	"Ueno",			// 5
	"Uguisudani",	// 6
	"Nippori",		// 7
	// Nisinippori	// 8
	"Tabata",		// 9
	"Komagome",		// 10
	"Sugamo",		// 11
	"Otsuka",		// 12
	"Ikebukuro",	// 13
	"Mejiro",		// 14
	"Takabanobaba",	// 15
	"Shin-okubo",	// 16
	"Sinjyuku",		// 17
	"Yoyogi",		// 18
	"Harajyuku",	// 19
	"Shibuya",		// 20
	"Ebisu",		// 21
	"Meguro",		// 22
	"Gotanda",		// 23
	"Osaki",		// 24
	"Sinagawa",		// 25
	// TakanawaGateWay	// 26
	"Tamachi",		// 27
	"Hamatsucho",	// 28
	"Shinjyuku",	// 29
	"Yuurakucho"	// 30 end
	};
	// 年数
	int year;
	while (true)
	{
		// 追加した要素を削除する処理
		for (list<const char*>::iterator itr = station.begin(); itr != station.end(); itr++)
		{
			// それぞれを削除する
			if (*itr == "Nisinippori" || *itr == "TakanawaGateWay")
			{
				station.erase(itr);
				break;
			}
		}

		printf("0.1970年,1.2019年,2.2022年\n");
		printf("先頭番号を選択してください\n");
		printf("年代 : ");

		scanf_s("%d", &year);
		

		// 要素を追加する処理
		// 最初から最後になるまで繰り返す
		for (list<const char*>::iterator itr = station.begin(); itr != station.end(); itr++)
		{
			// 標準2019
			if (year == 1)
			{
				if (*itr == "Tabata")
				{
					itr == station.insert(itr, "Nisinippori");
					itr++;
				}
			}

			// 2022年
			if (year == 2)
			{
				if (*itr == "Tabata")
				{
					itr == station.insert(itr, "Nisinippori");
					itr++;
				}
				if (*itr == "Tamachi")
				{
					itr == station.insert(itr, "TakanawaGateWay");
					itr++;
				}
			}
		}

		// 描画処理
		//それぞれの年数で分別
		if (year == 0 || year == 1 || year == 2)
		{
			for (list<const char*>::iterator itr = station.begin(); itr != station.end(); itr++)
			{
				cout << *itr << "\n\n";
			}
		}
		else if (year >= 3)
		{
			printf("0,1,2以外は受け付けません\n");
		}
	}

	
	system("pause");
	return 0;
}