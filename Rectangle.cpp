#include "Rectangle.h"
#include <stdio.h>

// �ʐς̌v���p
float Rectangle::Size()
{
	return x * y;
}
// �l�̕\��
void Rectangle::Draw()
{
	printf("%f*%f\n", x, y);
	printf("Ractangle�ʐς� : %f\n\n", Size());
}