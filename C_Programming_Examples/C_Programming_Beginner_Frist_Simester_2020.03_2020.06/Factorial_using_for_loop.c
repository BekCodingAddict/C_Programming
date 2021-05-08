#include <stdio.h>

int main() {
	int num; printf("Enter the number >>"); long fact = 1;
	scanf("%d", &num);
	for (int i=1;i<=num;i++)
		fact = fact * i;
	printf("num %d factorial number is %d !!\n", num, fact);
	return 0;
}