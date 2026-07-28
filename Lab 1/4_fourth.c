#include <stdio.h>

struct product {
    char product_id[128];
    char product_name[128];
    float price;
    int quantity;
};

int main() {
    struct product p1;
    
    printf("Enter product id: ");
    scanf("%s", p1.product_id);

    printf("Enter product name: ");
    scanf("%s", p1.product_name);

    printf("Enter the price: ");
    scanf("%f", &p1.price);

    printf("Enter the quantity: ");
    scanf("%d", &p1.quantity);

    printf("\nProduct details:\n");
    printf("ID: %s\n", p1.product_id);
    printf("Name: %s\n", p1.product_name);
    printf("Price: %.2f\n", p1.price);
    printf("Quantity: %d\n", p1.quantity);

    return 0;
}