#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int *p;
    p = a;  // or p = &a[0];

    printf("\n size of int: %d", sizeof(int));
    printf("\n size of a: %d", sizeof(a));
    printf("\n Size of an array: %d",sizeof(a)/sizeof(int));

    printf("\n Value of *P: %d",*p);

    p++;
    printf("\n Value of *P++: %d",*p++);
     printf("\n Value of ++*P: %d",++*p);
    return 0;
}
