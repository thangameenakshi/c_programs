#include <stdio.h>
#include <stdlib.h>
struct student
{
  char *name;
  int age;
  float per;
};

void display(struct student o)
{
    printf("\n Name        : %s",o.name);
    printf("\n Age         : %d",o.age);
    printf("\n Percentage  : %0.2f",o.per);

}
int main()
{
    struct student o={"Meenu",20,85.5};
    display(o);
    return 0;
}
