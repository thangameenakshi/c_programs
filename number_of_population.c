#include <stdio.h>

int main()
{
    int pop=80000,popmen,popwomen,poplit,litmen,litwomen,ilitmen,ilitwomen;
    popmen=(52*pop)/100;
    popwomen=pop-popmen;

    poplit=(48*pop)/100;

    litmen=(35*pop)/100;
    litwomen=pop-litmen;

    ilitmen=pop-litmen;
    ilitwomen=pop-litwomen;

    printf("\n Total population:  %d",pop);
    printf("\n Total men:  %d",popmen);
    printf("\n Total women:  %d",popwomen);

    printf("\n Literate men:  %d",litmen);
     printf("\n Literate women:  %d",litwomen);

      printf("\n Iliterate men:  %d",ilitmen);

    printf("\n Iliterate women:  %d",ilitwomen);

    printf("\n Total literacy:  %d",poplit);


    return 0;
}


