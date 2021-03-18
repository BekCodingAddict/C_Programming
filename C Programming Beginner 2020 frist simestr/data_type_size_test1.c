#include <stdio.h>
#include <limits.h>

int main() {
	int num;
	printf("Enter number >>");
	scanf("%d", &num);
	printf("num >> %d \v", num);
	short num1 = SHRT_MAX;
	unsigned short num2 = USHRT_MAX;
	printf("short num1>>Short max value>>%d, unsigned short max value >>%d \n", num1, num2);
	return 0;
}