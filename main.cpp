#include <stdio.h>
#include <iostream>
#include <list>
#include <vector>
#include "Test.h"
using namespace std;

int main() {

	Test* test_ = Test::GetInstance();
	
	printf("%d",test_);
	system("pause");
	return 0;
}