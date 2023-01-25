#include "Circle.h"
#include <stdio.h>

// 面積の計測用
float Circle::Size()
{
	return radius * radius * PI;
}
// 値の表示
void Circle::Draw()
{
	printf("%f*%f*%f\n", radius, radius, 3.14f);
	printf("Circle面積は ; %f\n\n", Size());
}
