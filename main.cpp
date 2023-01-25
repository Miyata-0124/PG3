#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <list>
#include <vector>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main() {
	Circle* circle = new Circle;
	Rectangle* rectangle = new Rectangle;
	circle->Size();
	circle->Draw();
	rectangle->Size();
	rectangle->Draw();
	system("pause");
	return 0;
}