#include "Circle.h"
#include <stdio.h>

// �ʐς̌v���p
float Circle::Size()
{
	return radius * radius * PI;
}
// �l�̕\��
void Circle::Draw()
{
	printf("%f*%f*%f\n", radius, radius, 3.14f);
	printf("Circle�ʐς� ; %f\n\n", Size());
}
