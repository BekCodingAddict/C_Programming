#include <stdio.h>

int main() {
    int i = 10; printf("i >> %p \n", &i);
	int* p=NULL; printf("*p>>%p\n",p);
	p = &i; printf("p=&i>>%p\n", p);
	float num1 = 2.55;
	//p = num1; error it because data type is not suitable
	char* chp; int* ip; double* dp;
	chp = (char*)10000; ip = (int*)10000; dp = (double*)10000;
	printf("before increasing chp>>%p, ip>>%p , dp>>%p \n", chp, ip, dp);
	chp++; ip++; dp++;
	printf("After increasing chp>>%p, ip>>%p , dp>>%p \n", chp, ip, dp);//You can see the data size has increased
	//pointer data type change
	float* fp; float fp1 = 5.6f;  fp = &fp1; printf("%f \n", fp);
	//double * p1 = 10.1313; error 


	return 0;
}