#include <stdio.h>


int add(int num1, int num2);
int sub(int num1, int num2);

int main() {
	int arr[5] = { 10,20,30,40,50 };
	int(*ap)[5]; ap = &arr;
	for (int i = 0; i < 5; i++) {
		printf("ap[%d]=%d\n", i, (*ap)[i]);//*ap[i] is not true!
	}

	//function pointer
	int (*pf)(int, int);
	pf = add; int result;
	result = pf(10, 20); printf("pf=add;result>>%d \n", result);
	pf = sub;
	result = pf(20, 10); printf("pf=sub; result>>%d \n", result);

	return 0;
}

int add(int num1, int num2) { return num1 + num2; }
int sub(int num1, int num2) { return num1 - num2; }