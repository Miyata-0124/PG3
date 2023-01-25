#include "Rectangle.h"
#include <stdio.h>

// 面積の計測用
float Rectangle::Size()
{
	return x * y;
}
// 値の表示
void Rectangle::Draw()
{
	printf("%f*%f\n", x, y);
	printf("Ractangle面積は : %f\n\n", Size());
}