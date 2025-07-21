#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days;
    printf("Enter the no of days the book will not return:");
    scanf("%d",&days);

    if(days<=5)
    {
        printf("\n your fine amount will be 5 paisa");
    }
    else if(days>=6 && days<=10)
    {

        printf("\n your fine amount will be 1 rupee");
    }
     else if(days>10 && days<=30)
     {

        printf("\n your fine amount will be 5 rupees");
     }

     else
     {
         printf("\n your Membership will be cancel");
     }

    return 0;
}
