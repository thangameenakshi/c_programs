#include <stdio.h>

int main()
{
    char c;
    printf("\n Enter the letter:");
    scanf("%c",&c);

    switch(c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("\n %c is a vowel",c);
        break;

    default:
        printf("\n %c It is consonant",c);
    }
    return 0;
}
