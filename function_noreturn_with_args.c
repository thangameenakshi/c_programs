#include <stdio.h>

void add(int,int); //function declaration


int main() // function call in main function
{
    int a,b;
    printf("Enter two number");
    scanf("%d %d",&a,&b);
    add(a,b);
    return 0;
}

void add(int x,int y) //function definition
{
    int c=x+y;
    printf("\n Total: %d",c);
}
