#include <stdio.h>

int main()
{
    int j,i,n;
    printf("\n Enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
