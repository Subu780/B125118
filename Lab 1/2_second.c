#include <stdio.h>

struct employee{
    char employee_id[128];
    char name[128];
    float salary;
};

int main(){
    struct employee emp[3];

    for (int i = 0; i < 3; ++i) {
        printf("Enter details for employee %d\n", i + 1);
        printf("Employee ID: ");
        scanf(" %s", emp[i].employee_id);
        printf("Name: ");
        scanf(" %s", emp[i].name);
        printf("Salary: ");
        scanf(" %f", &emp[i].salary);
        printf("\n");
    }

    printf("Employee details:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Employee %d:\n", i + 1);
        printf("ID: %s\n", emp[i].employee_id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n\n", emp[i].salary);
    }

    return 0;
}