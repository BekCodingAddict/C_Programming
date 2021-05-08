#include <stdio.h>
void inc(int num1, static int num2) { num1++; num2++; }

int main() {
	for (int i = 0; i < 5; i++) {
		int temp = 0; temp++;
		printf("temp variable value in for loop >>%d  \n", temp);
	}
	int num1 = 10; int num2 = 0;
	inc(num1,num2); printf("inc (num1>>%d and num2) >> %d \n", num1,num2);
	int num3 = 5; num3 = func1(10); printf("func1() num3>>%d \n", num3);

	return 0;
}