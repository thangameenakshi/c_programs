#include <stdio.h>

int main()
{
   int amt;
   printf("\n Enter amount to be withdraw:");
   scanf("%d",&amt);

   printf("\n 100: %d",(amt/100));
   printf("\n 50: %d",((amt%100)/50));

   printf("\n 10: %d",(((amt%100)%50)/10));
   printf("\n Remaining notes: %d",((amt%100)%50)%10);
    return 0;
}
