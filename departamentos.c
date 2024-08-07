#include <stdio.h>
int main(){


int departamento, funcionarios, contadorFuncionarios, deptoMaiorSalario;
 float salario, totalSalarios, maiorSalario, totalGeralSalarios;

  salario = 0;
  maiorSalario = 0;
  totalGeralSalarios = 0;

 for(departamento =0; departamento <=2; departamento ++){
 printf("\nINFORME O NUMERO DE FUNCIONARIOS DO DEPTO %i: ", departamento+1);
 scanf("%i",&funcionarios);
 totalSalarios = 0;
 for(contadorFuncionarios = 1; contadorFuncionarios <= funcionarios;
contadorFuncionarios ++){
 printf("INFORME O SALARIO DO FUNCIONARIO %i: ", contadorFuncionarios);
 scanf("%f",&salario);
 if(salario > maiorSalario){
 maiorSalario = salario;
 deptoMaiorSalario = departamento+1;
 }
 totalSalarios += salario;
 totalGeralSalarios += salario;
 }
 printf("**********************************************");
 printf("\nTOTAL DOS SALARIOS DO DEPTO %i E: R$%.2f", departamento+1,
totalSalarios);
 printf("\n**********************************************");
 }
 printf("\nO MAIOR SALARIO E: R$%.2f, PERTENCE AO DEPTO %i", maiorSalario,
deptoMaiorSalario);
 printf("\n**********************************************");
 printf("\nTOTAL GERAL DOS SALARIOS: %.2f", totalGeralSalarios);
}



