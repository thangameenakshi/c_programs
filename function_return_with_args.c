#include <stdio.h>

int add(int,int);

int main()
{
    int a,b;
    printf("\n Enter two number:");
    scanf("%d %d",&a,&b);
    printf("\n Total: %d",add(a,b));

    return 0;
}

int add(int x,int y)
{
    return x+y;
}
