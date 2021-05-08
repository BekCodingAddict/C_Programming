#include <stdio.h>
#include <string.h>

void getToken();

int main() {
	char str1[10] = "Hello";
	char str2[10] = "C++";
	if (strcmp("car", "dog"))
		printf("Bir xil\n");
	else
		printf("Bir xil emas!");

	char * p = strchr("Hello", 'l');

	if (strstr(str1, str2))
		printf("Bor\n");
	else
		printf("Yoq\n");
	strncpy(str1, str2, 3);
	printf("strncpy >>%s\n", str1);
	strncat(str1, str2, 3);
	printf("strncat >>%s\n", str1);
	getToken();
	return 0;

}

void getToken() {
	char* str; char sept[] = ",\t\n"; char* token;
	printf("Enter words>>\n");
	scanf("%s", &str);
	token = strtok(str, sept);
	while (token != NULL) {
		printf("Token: %s\n",token);
		token = strtok(NULL, sept);

	}
}