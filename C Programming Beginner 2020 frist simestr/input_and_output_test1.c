#include <stdio.h>

int add(int num1, int num2) {
	return num1 + num2;
}

int sub(int num1,int  num2) {
	return num1 - num2;
}
int div(int num1, int num2) {
	return num1 / num2;
}
int mult(int num1, int num2) {
	return num1 * num2;
}
int main() {
	int number = 10;
	printf(number);/// this is not posible error
	int num1, num2, sum;
	printf("Enter the frist number >>"); scanf("%d%d", &num1, &num2); sum = add(num1, num2);
	printf("sum add>>%d\n", sum);
	return 0;
}