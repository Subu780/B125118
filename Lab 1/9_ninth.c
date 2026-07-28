#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float cgpa;
};

int main() {
    struct Student students[5];
    printf("Enter details of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
    }

    printf("\nStudents with CGPA greater than 8.0:\n");
    for (int i = 0; i < 5; i++) {
        if (students[i].cgpa > 8.0) {
            printf("Roll No: %d\n", students[i].rollNo);
            printf("Name: %s\n", students[i].name);
            printf("CGPA: %.2f\n\n", students[i].cgpa);
        }
    }

    return 0;
}
