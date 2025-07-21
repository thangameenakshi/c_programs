#include <stdio.h>
#include <stdlib.h>
int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    printf("\n Enter two number:");
    scanf("%d %d",&a,&b);
    printf("\n before swapping A: %d | B:%d",a,b);
    swap(&a,&b);
    printf("\n After swapping A: %d | B:%d",a,b);
    return 0;
}
