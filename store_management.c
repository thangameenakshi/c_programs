#include <stdio.h>
#include <stdlib.h>

struct store
{
    char *name;
    char *author;
    double price;
    char *model;
    char *color;
};

struct store2
{
    double price;
    union
    {
        struct
        {
            char *name;
            char *author;
        } book;

        struct
        {
            char *model;
            char *color;
        } cell;
    } product;
} o2;


int main()
{
    o2.product.cell.model="Nokia";
    o2.product.cell.color="Blue";
    o2.price=3500.00;
    printf("\n Size of struct:%d",sizeof(struct store));
    printf("\n Size of struct:%d",sizeof(struct store2));
    return 0;
}
