#include <stdio.h>
#include <stdlib.h>

int main (){
int vetorPrincpal[10];
int vetorPar[10];
int vetorImpar[10];
int i,par,impar, parimpar;
parimpar=0;
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

while(parimpar!=1 && parimpar!=2)
    {
    printf("Deseja saber os vetores Pares ou Impares?\n");
    printf("1-Pares     2-Impares\n");
    scanf("%d",&parimpar);
    fflush(stdin);
    if(parimpar!=1 || parimpar!=2)
        printf("Opcao Invalida, tente novamente\n");
    }
if(parimpar==1){
    for(i=0;i<par;i++){
            printf("Conteudo do Vetor %d ==> %d\n",i+1,vetorPar[i]);
        }
    }
if(parimpar==2){
    for(i=0;i<impar;i++){
            printf("Conteudo do Vetor %d ==> %d\n",i+1,vetorImpar[i]);
        }
    }

system("pause");
return 0;
}
