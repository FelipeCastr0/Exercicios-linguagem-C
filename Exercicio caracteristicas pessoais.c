#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (){
int idade, pessoas, idadeSuperior50, contadorAlturaMenor, ruivassoazuis, idadeAlturaMenor;
float peso, altura, olhosAzuis;
char cOlhos, cCabelo;
idadeSuperior50=0;
contadorAlturaMenor=0;
olhosAzuis=0;
idadeAlturaMenor=0;
ruivassoazuis=0;
idade=0;
peso=0;
altura=0;



for (pessoas =1; pessoas <=2; pessoas++){

    printf("INFORME A IDADE DO INDIVIDUO NUMERO %i:", pessoas);
    scanf("\n%i", &idade);
    while(idade<=0);
    if(idade<=0){
        printf("Valor de Idade Invalida, tente novamente!");
        scanf("\n%i",&idade);
    }
    printf("INFORME O PESO DO INDIVIDUO NUMERO %i:", pessoas);
    scanf("\n%.2f", &peso);
    while(peso<=0);
    if(peso<=0){
        printf("Valor de Peso Invalido, tente novamente!");
        scanf("\n%.2f", &peso);
    }
    printf("INFORME A ALTURA DO INDIVIDUO NUMERO %i:", pessoas);
    scanf("\n%.2f", &altura);
    while(altura<=0);
    if(altura<=0){
        printf("Valor de Altura Invalida, tente novamente!");
        scanf("\n%.2f", &altura);
    }
    while(cOlhos!= 'A', cOlhos!= 'P',cOlhos!= 'V', cOlhos!= 'C');
    printf("INFORME A COR DOS OLHOS DO INDIVIDUO NUMERO %i:\nP-Preto  C-Castanho  V-Verde  A-Azul", pessoas);
    scanf("\n%c", &cOlhos);
    cOlhos=toupper(cOlhos);
    fflush(stdin);
    if(cOlhos<=0){
        printf("Valor da Cor dos Olhos Invalida, tente novamente!");
    }
    while(cCabelo!= 'R', cCabelo!= 'P',cCabelo!= 'L', cCabelo!= 'C');
    printf("INFORME A COR DOS OLHOS DO INDIVIDUO NUMERO %i:\nP-Preto  C-Castanho L-Louro  R-Ruivo", pessoas);
    scanf("\n%c", &cCabelo);
    cCabelo=toupper(cCabelo);
    fflush(stdin);
    if(cCabelo<=0){
        printf("Valor da Cor do Cabelo Invalida, tente novamente!");
    }
    if (idade >50 && peso <60){
        idadeSuperior50++;
    }
    if (altura<1,5){
        contadorAlturaMenor++;
        idadeAlturaMenor+=idade;
    }
    if(cOlhos=='A'){
        olhosAzuis++;
    }
    if(cCabelo=='R' && cOlhos!='A'){
        ruivassoazuis++;
    }
}
idadeAlturaMenor=idadeAlturaMenor/contadorAlturaMenor;

printf("Quantidade de pessoas com idade superior a 50 anos e peso menor que 60kg = %i", idadeSuperior50);
printf("Media de idade das pessoas com altura inferior a 1,50m = %i", idadeAlturaMenor);
printf("Porcentagem de pessoas com olhos azuis entre todas as pessoas analizadas = %.2f", olhosAzuis*100/(pessoas-1));
printf("Quantidade de pessoas ruivas sem olhos azuis = %i", ruivassoazuis);

return 0;

}
