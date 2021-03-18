#include <stdio.h>

void Display();
int add(int num1, int num2) { return num1 + num2; }
int sub(int num1, int num2) { return num1 - num2; }
int mul(int num1, int num2) { return num1 * num2; }
int div(int num1, int num2) { return num1 / num2; }
int main() {
	int choose, result, x, y;
	int (*pf[4])(int, int) = { add,sub,mul,div };

	while (1) {
		Display();
		printf("Choose your menu>>\n");
		scanf("%d", &choose);
		if (choose < 0 || choose >= 4)
			break;
		printf("Enter 2 integer number>>\n");
		scanf("%d %d", &x, &y);
		result = pf[choose](x, y);
		printf("Opertation result is >>%d\n", result);

	}

	return 0;
}

void Display() {
	printf("1.Subtraction\n 2.Addition\n 3.Multiplie\n 4.Division\n");
}
