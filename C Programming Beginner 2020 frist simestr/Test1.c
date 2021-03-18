#include <stdio.h>

int main() {
	double num = 123.567;
	printf("num>>%f \n", num);
	printf("num >> %e \n", num);
	printf("Enter octal number >>\n"); int num2;
	scanf("%x", num2); printf(">Octal number >%x\n", num2);
	return 0;
}