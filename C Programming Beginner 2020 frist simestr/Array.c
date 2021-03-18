#include <stdio.h>
#include <time.h>
#define Size_fo_Array 5


void print_Array(int arr[], int size);

void modify_array(int arr[], int size);

int main() {
	int minimum;
	int arr[Size_fo_Array];
	arr[0] = 10; printf("Array[0]=%d \n", arr[0]);
	printf("Array[1]=%d \n ", arr[1 + 1]);//entered the garbich value
	//array index sorting

	srand((unsigned)time(NULL));
	for (int i = 0; i < Size_fo_Array; i++) {
		arr[i] = (rand() % 100 )+ 1;
		printf("%-3d ", arr[i]);
	}
	printf("\n\n");
	minimum = arr[0];
	for (int i = 0; i < Size_fo_Array; i++) {
		if (arr[i] < minimum) {
			minimum = arr[i];
		}
	}
	printf(" Most little value is %d \n", minimum);
	for (int i = 0; i < Size_fo_Array; i++) {
		printf("%-3d", arr[i]);
	}printf("\n");
	//array in function
	int list[Size_fo_Array] = { 1,2,3,4,5 };
	print_Array(list, Size_fo_Array);
	modify_array(list, Size_fo_Array);
	print_Array(list, Size_fo_Array);

	return 0;
}

void modify_array(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		++arr[i];
	}
}
void print_Array(int arr[],int size) {
	for (int i = 0; i < size; i++) {
		printf("%-3d", arr[i]);
	}
}