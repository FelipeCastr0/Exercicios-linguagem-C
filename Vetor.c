#include <stdio.h>
#include <stdlib.h>

int main (){
int vetor[10];
int i;
for (i=0;i<10;i++){
    printf("\nInforme o conteudo do vetor %d:\n", i+1);
    scanf("%d",&vetor[i]);
}
for(i=0;i<10;i++){
    printf("Conteudo do Vetor %d ==> %d\n",i,vetor[i]);
}
system("pause");
return 0;
}
