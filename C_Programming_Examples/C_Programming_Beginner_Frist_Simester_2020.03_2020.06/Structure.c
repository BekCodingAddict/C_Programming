#include <stdio.h>


struct Student {
	char* name;
	int number;
	double graede;
}s1;

struct point {
	int x;
	int y;
};
struct rect {
	struct point p1;
	struct point p2;
};

int main() {
	s1.graede = 4.5;
	s1.number = 1256;
	s1.name = "Otabek";
	printf("Name>>%s \n Student Id>>%d \n Student grade >>%f\n",s1.name,s1.number,s1.graede);

	struct point p1 = { 10,20 };
	struct point p2 = { 30,40 };
	printf("point p1>> X>>%d Y>>%d \n", p1.x, p1.y);
	printf("point p2>> X>>%d Y>>%d \n", p2.x, p2.y);

	struct rect rc1 = { { 10,20 },{ 30,40 } };
	printf("rect rc1.p1>>X>>%d Y>>%d \n rc1.p2.X>>%d , rc1.p2.Y>>%d \n", rc1.p1.x,rc1.p1.y, rc1.p2.x,rc1.p2.y);

	p1 = p2;
	printf("point p1>> X>>%d Y>>%d \n", p1.x, p1.y);
	printf("point p2>> X>>%d Y>>%d \n", p2.x, p2.y);
	//////struct comparition
	////if (p1 == p2) printf("True!");
	////else printf("False!"); ---> we do not compare this way

	if (p1.x == p2.x) printf("True!");
	else printf("False!");
	return 0;
}