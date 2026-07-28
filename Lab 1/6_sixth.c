#include <stdio.h>

struct distance {
    float feet;
    float inches;
};

int main() {
    struct distance d1, d2, total;
    printf("Enter 1st distance:\n");
    printf("Enter feet: ");
    scanf("%f", &d1.feet);
    printf("Enter inches: ");
    scanf("%f", &d1.inches);
    printf("\nEnter 2nd distance:\n");
    printf("Enter feet: ");
    scanf("%f", &d2.feet);
    printf("Enter inches: ");
    scanf("%f", &d2.inches);

    total.feet = d1.feet + d2.feet;
    total.inches = d1.inches + d2.inches;

    if (total.inches >= 12.0) {
        total.feet += (int)(total.inches / 12);
        total.inches = total.inches - ((int)(total.inches / 12) * 12);
    }
    printf("\nTotal distance = %.0f feet and %.1f inches\n", total.feet, total.inches);
    return 0;
}