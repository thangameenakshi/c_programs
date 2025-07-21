#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,n,g;
    printf("\n Enter the limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter the values:");
        scanf("%d",&a[i]);
    }
    g=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>g)
            g=a[i];
    }

    printf("\n The greatest numeber is  : %d",g);
    return 0;
}
