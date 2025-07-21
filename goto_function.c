#include <stdio.h>

int main()
{
    printf("\n MENU CARD");
    printf("\n 1.COFFEE          : RS 15/-" );
    printf("\n 2.TEA             : RS 10/-" );
    printf("\n 3.COLD COFFEE     : RS 25/-" );
    printf("\n 4.MILK SHAKE      : RS 50/-" );

    int c,total=0,q,i;
    joes:
    printf("\n Enter your choice:");
    scanf("%d",&c);

    printf("\n Enter the quality:");
    scanf("%d",&q);

    switch(c)
    {
    case 1:
        printf("\n You have selected coffee");
        total=total+(q*15);
        break;

    case 2:
        printf("\n You have selected tea");
        total=total+(q*10);
        break;

    case 3:
        printf("\n You have selected cold coffee");
        total=total+(q*25);
        break;

    case 4:
        printf("\n You have selected milk shake");
        total=total+(q*50);
        break;

    default:
        printf("\n Only these items are available");
        break;

    }

    printf("\n Do you want to continue:");
    scanf("%d",&i);
    if(i==1)
    {
        goto joes;
    }


    printf("\n Total amount: %d",total);
    printf("\n Thank you come again");


    return 0;
}
