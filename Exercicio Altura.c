#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main (){
int numPessoas,maiorPessoa, menorPessoa;
float altura, maiorAltura, menorAltura;
char sexo;


do {
    while (altura<=0){
        printf("Informe a altura da pessoa %i",numPessoas);
        scanf("%f",altura);
    }
    if(altura<=0){
        printf("Altura invalida, digite novamente");
    }
    if(altura>maiorAltura){
        maiorAltura=altura;
        maiorPessoa=numPessoas;
    }
    if(altura<menorAltura){
        menorAltura=altura;
        menorPessoa=numPessoas;
    }



}

return 0;
}
