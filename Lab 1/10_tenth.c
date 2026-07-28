#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct student {
    char roll_no[32];
    char name[128];
    struct date dob;
};

int main() {
    struct student s1;
    printf("Enter roll number: ");
    scanf("%s", s1.roll_no);
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter birth day: ");
    scanf("%d", &s1.dob.day);
    printf("Enter birth month: ");
    scanf("%d", &s1.dob.month);
    printf("Enter birth year: ");
    scanf("%d", &s1.dob.year);
    printf("\nStudent Information:\n");
    printf("Roll Number: %s\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("Date of Birth: %02d/%02d/%d\n", s1.dob.day, s1.dob.month, s1.dob.year);
    return 0;
}