#include <stdio.h>
struct Student {
	char name[20];
	int Id;
	float grade;
};

int equal(struct Student s1, struct Student s2) {
	if (s1.Id == s2.Id)
		return 1;
	else
		return 0;
}
int main() {
	struct Student list[3] = {
		{"Otabek",20101256,3.5},
		{"Jaloldin",20101065,2.75},
		{"Farrux",20122560,3.85}
	};
	struct Student s1 = { "Otabek",20101256,3.5 };
	struct Student s2 = { "jaloli",20101056,2.75 };

	for (int i = 0; i < 3; i++) {
		printf("Student %d) Name>>%s, Id>>%d, grade>>%f \n", i+1, list[i].name, list[i].Id, list[i].grade);
	}
	return 0;
}