#include <stdio.h>

int main() {
	char str1[5] = { 'a','b','c','d','\0' };
	printf("str1=%s \n", str1);
	char str2[6] = "Hello";
	printf("str2=%s \n", str2);
	int ch; while ((ch = _getch()) != EOF)
		_putch(ch);
	return 0;
}