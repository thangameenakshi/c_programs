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
    struct student o={"Meenu",20,75.5};

    struct student *ptr=&o;

    printf("\n Name      : %s",ptr->name);
    printf("\n Age       : %d",ptr->age);
    printf("\n Percentage: %f",ptr->per);
    return 0;
}
