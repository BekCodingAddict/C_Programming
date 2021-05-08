#include <stdio.h>

int main() {
	char str[3][10] = {
		"Hello",
		"C++",
		"World"
	};
	for (int i = 0; i < 3; i++) {
		printf(">>%d >>%s\n", i, str[i]);
	}

	//Pointer using 
	char* str2[3] = {
		"Hello",
		"C++",
		"Programming!"
	};
	for (int i = 0; i < 3; i++) {
		printf(">>%d >>%s \n", i, str2[i]);
	}
	return 0;
}