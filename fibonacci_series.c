#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,n1,n2,n3;
    printf("\n Enter the limit: ");
    scanf("%d",&n);
    printf("\n Enter n1:");
    scanf("%d",&n1);
    printf("\n Enter n2:");
    scanf("%d",&n2);

    printf("\n %d",n1);
    printf("\n %d",n2);
    for(int i=2;i<n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("\n %d",n3);
    }

    return 0;
}
