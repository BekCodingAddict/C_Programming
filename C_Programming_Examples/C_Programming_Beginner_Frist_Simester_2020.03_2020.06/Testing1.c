#include <stdio.h>

int main() {
	int x, y; static int sum;
	printf("Enter the number >>");
	scanf("%d%d", &x, &y);
	if (x > y)
		return 0;
	sum = x;
	while (x == y) {
		sum = sum * (x + 1);
		x++;
		printf("sum>>%d\n", sum);
	}
	printf("SUM>> %d \n", sum);
	return 0;
}