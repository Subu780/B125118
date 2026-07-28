#include <stdio.h>
#include <string.h>

struct student{
	char roll_no[32];
	char name[128];
	int age;
	float cgpa;
};

int main(){
	struct student st1;
	printf("Enter your name: ");
	scanf("%s", &st1.name);
	printf("\n");
	printf("Enter your roll_no: ");
	scanf("%s", &st1.roll_no);
	printf("\n");
	printf("Enter your age: ");
	scanf("%d", &st1.age);
	printf("Enter your CGPA: ");
	scanf("%f", &st1.cgpa);
	printf("\nStudent details:\nName: %s\nRoll No: %s\nAge: %d\nCGPA: %.2f\n",
		   st1.name, st1.roll_no, st1.age, st1.cgpa);
	return 0;
}