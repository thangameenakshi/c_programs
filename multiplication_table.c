#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,limit,i;
    printf("\n Enter the table no:");
    scanf("%d",&n);
    printf("\n Enter the  limit:");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        printf("\n %d x %d=%d",n,i,n*i);
    }
    return 0;
}
