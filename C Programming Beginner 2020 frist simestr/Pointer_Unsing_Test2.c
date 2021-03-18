#include <stdio.h>
void set_max_ptr(int arr[], int size, int** pmax);
int main() {
	//void *pointer using
	void* point;
	int num1 = 10;
	point = &num1;
	printf("point(int)>>%d\n", *(int*)point);
	char str[] = "Hello C++";
	void* point2; float num2 = 3.14f;
	point2 = &num2;
	printf("point(char)>>%f \n", *(float*)point2);
	int arr1[5] = { 3,5,6,9,7 };
	int *pmax;
	set_max_ptr(arr1, 5, &pmax);
	return 0;
}

void set_max_ptr(int arr[], int size, int** pmax) {
	pmax = &arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] >pmax)
			pmax = &arr[i];
	}
	printf("pmax>>%d \n", *pmax);
}