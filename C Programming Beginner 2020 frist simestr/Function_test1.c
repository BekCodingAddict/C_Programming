#include <stdio.h>
#include <math.h>

void add(int num1 ,int num2) {
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
}
int main() {
	add(10, 10);
	double num1 = 8.23233;
	double result = 0; result =floor(num1);
	printf("result floor () >>%f\n", result);
	result = ceil(num1);
	printf("Result ceil() >>%f \n", result);

	///fabs()
	float num2 = 12.0;
	printf("fabs() >> result >>>%f  \n", fabs(num2));
	printf("fabs() >> result >>>%f  \n", fabs(-12.0));
	printf("fabs() >>%f \n", fabs(12.0 - 24.0));

	//pow() and sqrt() math functions
	printf("5x3 pow() >>%f \n", pow(5.0, 3.0));
	printf(" 16 ni ildiz osti qiymati sqrt() >>%f \n ", sqrt(16));






	return 0;
}