#include <stdio.h>

void sub(int b[], int size) {
	*b = 4;
	*(b + 1) = 5;
	*(b + 2) = 6;
}
int main() {
	int arr[5] = { 10,20,30,40,50, };
	for (int i = 0; i < 5; i++)
		printf("arr[%d]=%u \n", i, &arr[i]);

	printf("arr=%u \n", arr);
	printf("arr+1=%u \n", arr + 2);
	printf("*arr=%d \n", *arr);
	printf("*(arr+1)=%d \n", *(arr+1));
	int arr2[3] = { 1,2,3 };
	sub(arr2, 3);
	for (int i = 0; i < 3; i++)
		printf("arr2[%d]=%d \n", i, arr2[i]);
	return 0;
}