#include <stdio.h>
#include <stdlib.h>

int main (){
int vetor[10];
int i, parimpar;
parimpar=0;
for (i=0;i<10;i++){
    printf("\nInforme o conteudo do vetor %d:\n", i+1);
    scanf("%d",&vetor[i]);
    fflush(stdin);
}
while(parimpar!=1 && parimpar!=2){
printf("Deseja saber os vetores Pares ou Impares?\n");
printf("1-Pares     2-Impares\n");
scanf("%d",&parimpar);
fflush(stdin);
if(parimpar!=1 || parimpar!=2)
    printf("Opcao Invalida, tente novamente\n");
}
system("cls");
if(parimpar==1){
    for(i=0;i<10;i++){
        if(vetor[i]%2==0){
            printf("Conteudo do Vetor %d ==> %d\n",i+1,vetor[i]);
        }
    }
}
if(parimpar==2){
    for(i=0;i<10;i++){
        if(vetor[i]%2==1){
            printf("Conteudo do Vetor %d ==> %d\n",i+1,vetor[i]);
        }
    }
}
system("pause");
return 0;
}
