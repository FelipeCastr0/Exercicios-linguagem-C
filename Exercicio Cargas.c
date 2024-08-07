#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (){
int pais;
float preco, imposto, frete, seguro, precoFinal;
char transp, resp, carga;

do{
    printf ("\n Informe o preco unitario do produto\nR$");
    scanf ("%f", &preco);
    fflush(stdin);
    printf ("Informe o Pais de origem\n 1-EUA 2-MEXICO 3-OUTROS\n");
    scanf ("%d", &pais);

    fflush(stdin);
    while(pais != 1 && pais != 2 && pais != 3){
        printf("\nPais invalido, tente novamente\n");
        scanf("%d", &pais);
    }
    printf("\nInforme o meio de transporte\nT-Terrestre F-Fluvial A-Aereo\n");
    scanf("%c", &transp);
    transp= toupper(transp);
    fflush(stdin);
    while(transp != 'T' && transp != 'F' && transp != 'A'){
        printf("\nTransporte invalido, tente novamente\n");
        transp= getchar();
        transp= toupper(transp);
        fflush(stdin);
    }
    printf("\nCarga Perigosa\nS-Sim ou N-Nao\n");
    scanf("%c", &carga);
    carga= toupper(carga);
    fflush(stdin);
    while(carga!= 'S' && carga != 'N'){
        printf("\nCarga invalida, tente novamente\n");
        scanf("%c", &carga);
        carga= toupper(carga);
        fflush(stdin);
    }
    //Calculando o Imposto
    if(preco<= 100){
        imposto = preco * 0,05;
    }
    else{
        imposto = preco * 0,10;
    }

    //Calculando frete
    if (carga == 'S'){
        if(pais == 1){
            frete = 50;
        }
        else if(pais == 2){
            frete = 35;
        }
        else if (pais == 3){
            frete = 24;
        }
    }
    if (carga == 'N'){
        if(pais == 1){
             frete = 12;
        }
        else if(pais == 2){
            frete = 35;
        }
        else if(pais == 3){
            frete = 60;
        }

    }
    if (pais == 3 && transp == 'A'){
        seguro = preco / 2;
    }
    else{
        seguro = 0;
    }
    precoFinal = preco + frete + seguro + imposto;

    printf("\nPreco final do produto: R$%.2f", precoFinal);
    printf("\nValor do imposto: R$%.2f", imposto);
    printf("\nValor do frete: R$%.2f", frete);
    printf("\nValor do seguro: R$%.2f", seguro);

    printf("\nDeseja continuar o processamento:\n  S-sim ou N-nao");
    resp= getchar();
    resp= toupper (resp);
    fflush(stdin);


}while(resp!= 'S');

}
