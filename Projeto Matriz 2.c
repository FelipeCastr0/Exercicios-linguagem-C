#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main ()
{
    char produto[10][20], pesquisa[20];
    int i;

    for(i=0;i<3;i++)
    {
        printf("\nNome do produto Nr %d\n", i+1);
        fgets(produto[i],20, stdin);
        //toupper(produto[i]);
        //scan ("%s", &produto[i]);
    }
    system("cls");

    printf("Deseja pesquisar qual produto?\n");
    fgets(pesquisa, 20, stdin);
    //toupper(pesquisa);

    if (strcmp(pesquisa,produto[i])==0)
    {
        printf("O produto consta na lista no Nr%d = %c\n",i+1,produto);
    }
    if (strcmp(pesquisa,produto[i])!=0)
    {
        printf("O produto não consta na lista");
    }






return 0;

}
