#include <stdio.h>
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {

	// �錾 �w���plist(char�^)
	// �w���ǉ�
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
	// �N��
	int year;
	while (true)
	{
		// �ǉ������v�f���폜���鏈��
		for (list<const char*>::iterator itr = station.begin(); itr != station.end(); itr++)
		{
			// ���ꂼ����폜����
			if (*itr == "Nisinippori" || *itr == "TakanawaGateWay")
			{
				station.erase(itr);
				break;
			}
		}

		printf("0.1970�N,1.2019�N,2.2022�N\n");
		printf("�擪�ԍ���I�����Ă�������\n");
		printf("�N�� : ");

		scanf_s("%d", &year);
		

		// �v�f��ǉ����鏈��
		// �ŏ�����Ō�ɂȂ�܂ŌJ��Ԃ�
		for (list<const char*>::iterator itr = station.begin(); itr != station.end(); itr++)
		{
			// �W��2019
			if (year == 1)
			{
				if (*itr == "Tabata")
				{
					itr == station.insert(itr, "Nisinippori");
					itr++;
				}
			}

			// 2022�N
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

		// �`�揈��
		//���ꂼ��̔N���ŕ���
		if (year == 0 || year == 1 || year == 2)
		{
			for (list<const char*>::iterator itr = station.begin(); itr != station.end(); itr++)
			{
				cout << *itr << "\n\n";
			}
		}
		else if (year >= 3)
		{
			printf("0,1,2�ȊO�͎󂯕t���܂���\n");
		}
	}

	
	system("pause");
	return 0;
}