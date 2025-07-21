#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m1,m2,m3,m4,m5;
    printf("Enter 5 subject marks:");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

    float total=m1+m2+m3+m4+m5;
    printf("\n Total: %0.2f",total);

    float avg=total/5;
    printf("\n Average:%0.2f",avg);

    if(m1>=35 &&m2>=35 && m3>=35 && m4>=35 && m5>=35)
    {
        printf("\n Result: Pass");
        if(avg>=90 && avg<=100)
        {

            printf("\n A grade");

        }
        else if(avg>=80 && avg<=89)
        {

            printf("\n B grade");
        }
        else if(avg>=70 && avg<=79)
        {

            printf("\n C grade");
        }
        else
        {

            printf("\n D grade ");
        }
    }
    else
    {
        printf("\n Result :Fail");
        printf("\n Grade  :No grade ");

    }

    printf("\n Result will done");




    return 0;
}
