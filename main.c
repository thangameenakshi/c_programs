#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100],b[100][100],c[100][100];
    int i,j,m,n;
    printf("\n Enter the rows:");
    scanf("%d",&n);

    printf("\n Enter the columns");
    scanf("%d",&m);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\n Enter the elements a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\n Enter the elements b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }

     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("\t %d",c[i][j]);
        }
        printf("\n");
    }




    return 0;
}
