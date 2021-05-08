#include <stdio.h>

void func1(int x, int y);
void func2(int* x, int* y);

int main() {
	int a = 100, b = 200;
	printf("a=%d b=%d \n", a, b);
	func1(a, b);
	
	func2(&a, &b); 

	printf(" a=%d b=%d \n", a, b);

	return 0;
}

void func1(int x, int y) {
	int temp;
	printf("befor func1 >> a=%d , b=%d \n", x, y);
	temp = x;
	x = y;
	y = temp;
	printf("After func1 >> a=%d , b=%d \n", x, y);
}

void func2(int *x, int* y) {
	int temp;
	printf("befor func2 >> a=%d , b=%d \n", x, y);
	temp = *x;
	*x = *y;
	*y = temp;
	printf("After func2 >> a=%d , b=%d \n", x, y);
}