#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i,a=0,d=0,s=0;
    printf("\n Enter the string:");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
            a++;
        else if(str[i]>=48 && str[i]<=57)
            d++;
        else
            s++;
    }

    printf("\n Alphabets : %d",a);
    printf("\n Digits:%d",s);
    printf("\n Special character: %d",d);
    return 0;
}
