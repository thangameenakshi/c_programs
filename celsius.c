#include <stdio.h>


int main()
{
    float fah,c;
    printf("\n Enter temperature:");
    scanf("%f",&fah);

    c = (fah - 32) * 5/9;

    printf("celsius:%0.2f",c);


    return 0;
}
