#include<stdio.h>
int main()
{
    float bs,da,hra,gp;
    printf("\n Enter your basic salary:");
    scanf("%f",&bs);

    da=bs*0.4;
    hra=bs*0.2;
    gp=bs+da+hra;
    printf("\n Basic salary: %0.2f",bs);
    printf("\n DA: %0.2f",da);
    printf("\n HRA: %0.2f",hra);
    printf("\n Gross salary: %0.2f",gp);
    return 0;
}
