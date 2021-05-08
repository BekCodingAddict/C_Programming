#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "100";
	int value;
	sscanf(str, "%d", &value);
	printf("%d\n", value); value++;
	sscanf(str, "%d", &value);
	printf("%s\n", str);
	char filename[100];
	char s[100];
	for (int i = 0; i < 6; i++) {
		strcpy(filename, "image");
		sscanf(s, "%d", i);
		strcat(filename, s);
		strcat(filename, ".jpg");
		printf("%s\n", filename);
	}
	return 0;
}