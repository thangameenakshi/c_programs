#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m1,m2,m3,m4,m5,t,p;
    printf("Enter m1 , m2 , m3 , m4 , m5:");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);

    t=m1+m2+m3+m4+m5;
    p=t/5;
    printf("\n M1: %0.2f",m1);
    printf("\n M2:%0.2f",m2);
    printf("\n M3:%0.2f",m3);
    printf("\n M4:%0.2f",m4);
    printf("\n M5:%0.2f",m5);
    
    printf("\n Total:%0.2f",t);
    printf("\n Average:%0.2f",p);
    return 0;
}

