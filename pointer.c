#include <stdio.h>

int main()
{
   int a=10,*p;
   int **q;
   p=&a;
   printf(" \nvalue of A:%d",a);
   printf(" \nAddres of A:%d",&a);
   printf(" \nvalue of P:%d",p);
   printf(" \nAddress of P:%d",&p);
   printf(" \nDereferencing of P:%d",*p);
   printf("\n -------------------");

   q=&p;
   printf(" \nvalue of P:%d",p);
   printf(" \nAddres of P:%d",&p);
   printf(" \nvalue of Q:%d",q);
   printf(" \nAddress of Q:%d",&q);
   printf(" \nDereferencing of Q:%d",**q);
    return 0;
}
