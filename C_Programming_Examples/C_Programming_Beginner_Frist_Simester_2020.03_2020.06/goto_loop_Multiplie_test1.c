#include <stdio.h>

int main() {
	int num, i = 0;
	printf("Enter the number >>"); scanf("%d", &num);
	loop:
	printf("%d * %d =%d \n", num, i, num * i);
	i++;
	if (i == 10) goto end;
	goto loop;
end:


	return 0;
}