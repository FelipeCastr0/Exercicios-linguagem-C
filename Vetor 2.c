#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
    int vetor[10];
    int i, numPesquisa;
    char novaPesquisa;
    novaPesquisa='N';

    for (i=0; i<10; i++)
    {
        printf("\nInforme o conteudo do vetor %d:\n", i+1);
        scanf("%d",&vetor[i]);
    }


    while(novaPesquisa!='S')
    {
        printf("Informe o vetor que deseja pesquisar:\n");
        scanf("%d",&numPesquisa);
        if(numPesquisa=vetor[i]){
            printf("O indice que contem o numero pesquidado e %d ==> %d \n",i+1,vetor[i]);
        }
        if(numPesquisa!=vetor[i]){
            printf("Nenhum vetor contem o numero pesquisado, tente novamente");
        }
        printf("Deseja encerrar a pesquisa?\n");
        printf("S - Sim\n");
        fflush(stdin);
        scanf("%c",&novaPesquisa);
        novaPesquisa=toupper(novaPesquisa);
    }
    system("pause");
    return 0;
}
