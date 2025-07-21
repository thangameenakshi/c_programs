#include <stdio.h>

int main()
{
   int n,r;
   printf("\n Enter the number:");
   scanf("%d",&n);

   //last number
   r=n%10;
  //first number
  n=n/1000;
   int sum=r+n;
   printf("\n Sum: %d",sum);

    return 0;
}
