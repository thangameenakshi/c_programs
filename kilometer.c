#include <stdio.h>


int main()
{
    float km,m,cm,ft,i;
    printf("\n Enter the kiometers:");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    i=cm/2.54;
    ft=i/12;
    printf("\n KM : %0.2f",km);
    printf("\n M : %0.2f",m);
    printf("\n CM : %0.2f",cm);
    printf("\n I : %0.2f",i);
    printf("\n FT : %0.2f",ft);
    return 0;
}
