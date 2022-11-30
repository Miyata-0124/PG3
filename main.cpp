#include <stdio.h>
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {

	//éŒ¾ ‰w–¼—p•Ï”
	//‰w–¼’Ç‰Á
	list<char> station{ 'a','b' };
	//list<int>::iterator itr;
	auto itr = station.begin();
	cout << *itr << "\n";
	itr++;
	cout << *itr << "\n";

	system("pause");
	return 0;
}