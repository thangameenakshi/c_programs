#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("\n Enter the limit:");
    scanf("%d",&n);

    int *ptr=(int *)malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("\n Memory not available..");
        exit(1);
    }

    for(i=0;i<n;i++)
    {
        printf("\n Enter the integer:");
        scanf("%d",ptr+i);
    }
    for(i=0; i<n; i++)
    {
        printf("\%d ",*(ptr+i));
    }
    return 0;
}
