#include <stdio.h>

void set_pointer(char** q) {
	*q = "I'm always learning c programming!";
}

int main() {
	int i = 100;
	int* p = &i;
	int** q = &p;
	printf("i=%p  *p=%p  **q=%p  \n",&i,&p,&q);
	*p = 200; **q = 300;
	printf("i=%d  *p=%d  **q=%d  \n", i, *p, **q);
	char *po;
	set_pointer(&po);
	printf("What kind of programmng language are you larn>>:%s\n", po);
	//Point array
	int a = 10, b = 20, c = 30, d = 40, e = 50;
	int* api[5] = { &a,&b,&c,&d,&e };
	for (int i = 0; i < 5; i++) { printf("api[%d]=%d, and adress=%p\n", i, *api[i], &api[i]); }
	char* fruits[4] = { "Apple","Blueberry","Orange","Mellon" };
	for (int i = 0; i < 4; i++) { printf("fruit[%d]=%s \n", i, *fruits[i]); }
	//Pointer point array

	return 0;
}