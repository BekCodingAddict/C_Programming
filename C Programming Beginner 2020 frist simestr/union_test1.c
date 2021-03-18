#include <stdio.h>
union Student {
	char name[20];
};

enum days{SUN,MON,TUE,WED,THU,FRI,SAT};

int main() {
	union Student s1 = { "Otabek" };
	printf("Unione s1.name>>>%s \n", s1.name);
	char* days_name[] = {
		"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"
	};

	enum days d; d = WED;
	printf("%d index is %s \n", d, days_name[d]);

	///
	typedef int myint;
	myint a = 10;
	printf(">>%d \n", a);
#define UINT unsigned int


	return 0;
}