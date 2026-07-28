#include <stdio.h>

struct student {
    int roll_no;
    char name[128];
    float math;
    float c_lang;
    float physics;
};

int main() {
    struct student s;
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter marks in math: ");
    scanf("%f", &s.math);
    printf("Enter marks in C: ");
    scanf("%f", &s.c_lang);
    printf("Enter marks in physics: ");
    scanf("%f", &s.physics);
    float total = s.math + s.c_lang + s.physics;
    float average = total / 3.0;

    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}