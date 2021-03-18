#include <stdio.h>

int main() {

	char* str = "ARRA";
	char* str2 = "ARRA";
	int i = 0, j = 0;
	for (i = 0, j = 4; (i < 4) && (j < 0);i++,j--){
		if (str[i] == str2[j])
			printf("The same words!\n");
		else
			printf("not same words \n");

	}

	return 0;
}