#include <stdio.h>

struct book_info{
    char book_id[128];
    char title[128];
    char author[128];
    float price;
};

int main(){
    struct book_info b1;
    
    printf("Enter book id: ");
    scanf("%s",b1.book_id);
    printf("Enter title: ");
    scanf("%s",b1.title);
    printf("Enter author: ");
    scanf("%s",b1.author);
    printf("Enter the price: ");
    scanf("%f",&b1.price);
    printf("\nBook details:\n");
    printf("ID: %s\n", b1.book_id);
    printf("Title: %s\n", b1.title);
    printf("Author: %s\n", b1.author);
    printf("Price: %.2f\n", b1.price);
    return 0;
}