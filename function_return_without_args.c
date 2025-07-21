#include <stdio.h>
#include <stdlib.h>
int add();

int main()
{
    printf("\n Total: %d",add());
    return 0;
}

int add()
{
    int a,b;
    printf("\n Enter two numbers:");
    scanf("%d %d",&a,&b);
    return a+b;
}
