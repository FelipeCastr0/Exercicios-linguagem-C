#include <stdio.h>
#include <ctype.h>
int main (){

int operarios, operariosUser, opHomens, opMulheres, pecasOperario, totalPecas,pecasBonificacao, pecasHomens, pecasMulheres, melhorFuncionario;
float salarioMin, salarioFuncionario, maiorSalario, bonificacao;
char sexo;
salarioMin=1320;
opMulheres=0;
opHomens=0;
pecasHomens=0;
pecasMulheres=0;
maiorSalario=0;


printf ("DIGITE A QUANTIDADE DE FUNCIONARIOS:\n");
scanf ("%i", &operariosUser);
for (operarios=1; operarios<=operariosUser; operarios++){
    sexo= 'a';
    bonificacao=0;
    pecasOperario=0;
    salarioFuncionario=0;

    while (sexo !='M' && sexo!='F'){
        printf ("DIGITE O SEXO DO(A) OPERARIO(A) %i:\n",operarios);
        scanf (" %c", &sexo);
        sexo=toupper(sexo);
        if (sexo !='M' && sexo!='F'){
            printf("Valor informado incorreto\nPor favor, tente novamente\n");
        }
    }
    printf ("DIGITE A QUANTIDADE DE PECAS PRODUZIDAS PELO OPERARIO(A) %i:\n", operarios);
    scanf ("%i", &pecasOperario);
    if (sexo=='F'){
        opMulheres++;
        pecasMulheres+=pecasOperario;
    }
    else{
        opHomens++;
        pecasHomens+=pecasOperario;
    }
    totalPecas+=pecasOperario;
    //Encontrando o salario do funcionario
    if (pecasOperario<=30){
        salarioFuncionario=salarioMin;
    }
    else if (pecasOperario >30 && pecasOperario <=35){
        pecasBonificacao=pecasOperario-30;
        salarioFuncionario=(salarioMin+(salarioMin*0.03*pecasBonificacao));
    }
    else {
        pecasBonificacao=pecasOperario-35;
        salarioFuncionario=(salarioMin+(salarioMin*0.05*pecasBonificacao));
    }
    printf("\nFuncionario(a) %i\n", operarios);
    printf("Salario = R$ %.2f\n\n", salarioFuncionario);

}






return 0;
}
