#include <stdio.h>
template <typename T>
T Min(T a, T b) {
	if (a >= b)
	{
		return static_cast<T>(b);
	}
	return  static_cast<T>(a);
}
template <>
char Min<char>(char a, char b) {
	printf("”š‚Í‘ã“üo—ˆ‚Ü‚¹‚ñ\n");
	return 0;
}


int main(void) {
	printf("%d\n", Min<int>(10, 5));
	printf("%f\n", Min<float>(1.0f, 5.0f));
	printf("%f\n", Min<double>(1.0, 5.0));
	Min<char>('1', '5');

	return 0;
}