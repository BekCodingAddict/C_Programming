#include <stdio.h>
#include <ctype.h>
#include <string.h>

void string_functions();
int count_words(char* s);
int main() {
	//char str[100];
	//gets_s(str, 100);
	//puts(str);
	int  wc = count_words("Hello C++ Programming!");
	printf("Words amount %d \n", wc);
	string_functions();
	return 0;
}

int count_words(char* s) {
	int i, wc=0, waiting = 1;
	for (i = 0; s[i] != NULL; ++i) {
		if (isalpha(s[i])) {
			if (waiting) {
				wc++;
				waiting = 0;

			}
		}
		else
			waiting = 1;
	}
	return wc;
}

void string_functions() {
	char *str1;
	printf("Enter the words that you want to find lenght>>\n");
	scanf("%s", &str1);
	int size = strlen(str1);
	printf("string size is >>%d\n", size);
}