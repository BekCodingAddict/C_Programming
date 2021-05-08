#include <stdio.h>

int main() {
	printf(">>%d\n", 123);
	printf(">>%010d\n", 123);
	printf(">>%  d\n", 123);
	printf(">>%+d\n", 123);
	printf(">>%#x\n", 0x10);

	printf(">>%10d\n", 123);
	printf(">>%-10d\n", 123);
	printf(">>%10d\n", -123);
	printf(">>%-10d\n", -123);
	printf(">>%10s\n", "ABC");
	printf(">>%-10s\n", "ABC");

	printf(">>%f\n", 1.23456789);
	printf(">>%10.3f\n", 1.23456789);
	printf(">>%-10.3f\n", 1.23456789);
	printf(">>%.3f\n", 1.23456789);

	//printf type
	printf(">>%d\n",123);//10 진수
	printf(">>%i\n", 123);//10 진수
	printf(">>%u\n", 123);//10 진수
	printf("8>>%o\n", 123);// 8 진수
	printf("16>>%x\n", 123);//진수
	printf("16>>%X\n", 123);//16 진수
	printf(">>%f\n", 123.456);
	printf(">>%e\n", 123);
	printf(">>%E\n", 123);
	printf(">>%g\n", 123.456);
	printf(">>%G\n", 123.456);
	printf(">>%p\n", 123.456);



	return 0;
}