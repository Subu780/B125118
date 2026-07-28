#include <stdio.h>

struct employee{
    char employee_id[128];
    char name[128];
    float salary;
};

int main(){
    struct employee emp[5];

    for (int i = 0; i < 5; ++i) {
        printf("Enter details for employee %d\n", i + 1);
        printf("Employee ID: ");
        scanf(" %s", emp[i].employee_id);
        printf("Name: ");
        scanf(" %s", emp[i].name);
        printf("Salary: ");
        scanf(" %f", &emp[i].salary);
        printf("\n");
    }

    float highest_s;
    highest_s = emp[0].salary;
    int j = 0;
    for(int i = 1;i < 5; ++i){
        if(emp[i].salary > highest_s){
            j = i;
            highest_s = emp[i].salary;
        }
    }

    printf("Employee with the highest salary:\n");
    printf("Salary: %.2f\n", highest_s);

    printf("Employee details:\n");
    
    printf("Employee %d:\n", j + 1);
    printf("ID: %s\n", emp[j].employee_id);
    printf("Name: %s\n", emp[j].name);
    printf("Salary: %.2f\n\n", emp[j].salary);

    return 0;
}