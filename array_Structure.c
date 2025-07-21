#include <stdio.h>
#include <stdlib.h>
struct student
{
  char *name;
  int age;
  float per;
};

int main()
{
    struct student o[2];

    o[0].name="meenu";
    o[0].age=20;
    o[0].per=76.8;

     o[1].name="kavitha";
    o[1].age=53;
    o[1].per=89.9;


    printf("\n Name        : %s",o[0].name);
    printf("\n Age         : %d",o[0].age);
    printf("\n Percentage  : %0.2f",o[0].per);

    printf("\n Name        : %s",o[1].name);
    printf("\n Age         : %d",o[1].age);
    printf("\n Percentage  : %0.2f",o[1].per);

    return 0;

    return 0;

}
