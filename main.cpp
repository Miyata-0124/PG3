#include <stdio.h>
#include <iostream>
#include <list>
#include <vector>
#include "Test.h"
using namespace std;

int main() {
	TestSingleton* testSingleton = TestSingleton::GetInstance();
	//�g�p����

	system("pause");
	return 0;
}