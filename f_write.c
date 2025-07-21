#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("sample.txt","a");
    fprintf(fp,"hi");
    fclose(fp);
    return 0;
}
