#include <iostream>

int main() {
	int i, j;
	for (i= 1; i < 8; i++) {
		for (j= 6;j<=1;j--){
			if (i != j)
				std::cout << "*";
			else
				std::cout << " #";
		}
		printf("\n");
	}
	return 0;
}