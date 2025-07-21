#include <stdio.h>

int main()
{
    int n,r,sum=0;
    printf("\n Enter the number:");
    scanf("%d",&n);

    while(n>9)
    {

        sum=0;
    while(n>0)
    {

        r=n%10;
        sum=r+sum;
        n=n/10;
    }
    n=sum;

    }
    printf("\n Sum of digits: %d",sum);
    return 0;
}
