#include <stdio.h>

int (*fp)(int n1);
int inc(int num1) {
	return num1+10;
}


int main() {
	int a = 10;
	int result = inc(a);
	printf("a=%d \n", result);
	fp = inc;
	result = fp(a);
	char s[] = "Hello World";
	char t[] = "Hello C++";
	const char* p = s;
	char* const q = s;
	p = t; //p[3]='a'; is error 
	q[3] = 'A';
	/*q = t;*/ /*is error*/
	int n1[] = { 1,2 };
	const int* num1 = n1;/* num1[1] = 40;
						 ERROR*/
	int* const num2 = n1; 



	return 0;
}