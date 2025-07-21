#include <stdio.h>

void add(); //function declaration


int main() // function call in main function
{
    add();
    return 0;
}
void add() //function definition
{
    int a,b;
    printf("\n Enter two numbers:");
    scanf("%d %d",&a,&b);
    int c=a+b;
    printf("\n Total: %d",c);

}
