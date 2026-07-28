#include <stdio.h>

struct rectangle {
    float length;
    float breadth;
};

int main() {
    struct rectangle r;
    printf("Enter length: ");
    scanf("%f", &r.length);

    printf("Enter breadth: ");
    scanf("%f", &r.breadth);

    float area = r.length * r.breadth;
    float perimeter = 2 * (r.length + r.breadth);

    printf("\nArea: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}