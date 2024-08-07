#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main ()
{
    char produto[10][20];
    int i;

    for(i=0;i<10;i++)
    {
        printf("\nProduto Nr %d\n", i+1);
        fgets(produto[i],20, stdin);
        //scan ("%s", &produto[i]);
    }





return 0;

}
