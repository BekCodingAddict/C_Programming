#include <stdio.h>
#include <time.h>

#define array_Size 10
int binary_search(int list[], int n, int key);
int main() {

	int list[array_Size] = { 1,4,5,8,7,9,0,2,3 };
	int i, j, temp, last;
	for (i = 0; i < array_Size; i++) {
		last = i;
		for (j = (i + 1); j < array_Size; j++) {
			if (list[i] < list[j])
				last = j;
			temp = list[i];
			list[i] = list[last];
			list[last] = temp;
		}
	}

	for (i = 0; i < array_Size; i++)
		printf("%d ", list[i]);
	printf("\n");
	int choose;
	printf("Enter the number that you want to find?? \n");
	scanf("%d", &choose);
	for (int i = 0; i < array_Size; i++) {
		if (list[i] == choose)
			printf("The number that you find is there >>%d \n", i);
	}
	printf("Enter the number that you want to fint >> \n");
	scanf("%d ", &choose);
	printf("The Searching result >>%d \n", binary_search(list, array_Size, choose));

	return 0;
}

int binary_search(int list[], int n, int key) {
	int low, high, middle;
	low = 0; high = n - 1;
	while (low <= high) {
		printf("Low>>%d , High>>%d \n", low, high);
		middle = (low + high) / 2;
		if (key == list[middle])
			return middle;
		else if (key > list[middle])
			low = middle + 1;
		else
			high = middle - 1;

	}
	return -1;
}