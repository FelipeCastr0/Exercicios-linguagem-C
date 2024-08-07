#include <stdio.h>
#include <stdlib.h>

int main (){
int vetorPrincpal[10];
int vetorPar[10];
int vetorImpar[10];
int i,par,impar;
par=0;
impar=0;
for (i=0;i<10;i++){
    printf("\nInforme o conteudo do vetor %d:\n", i+1);
    scanf("%d",&vetorPrincpal[i]);
    fflush(stdin);
    if(vetorPrincpal[i]%2==0)
        {
        par++;
        vetorPar[par]=vetorPrincpal[i];
        }
    else
        {
        impar++;
        vetorImpar[impar];
        }
}
system("cls");
    for(i=0;i<par;i++){
            printf("Conteudo do Vetor %d ==> %d\n",i+1,vetorPar[i]);
        }
    for(i=0;i<impar;i++){
            printf("Conteudo do Vetor %d ==> %d\n",i+1,vetorImpar[i]);
        }

system("pause");
return 0;
}
