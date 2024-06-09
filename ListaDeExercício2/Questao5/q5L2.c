#include <stdio.h>
#include <stdlib.h>

/**
*@brief Função que calcula o salário a partir do salário bruto
*@param hora: armazena valor do argumento 1 em hora
*@param dia: armazena valor do argumento 2 em dia
*@retval salario: Retorna valor do salário
 */
double salarioLiquido(int hora, int dia){
  //Vamos supor que a empresa paga R$20,00 por hora trabalhada no mês.

  double salBruto = hora * dia * 20;
  double salLiquido1;
  //Calculo do IRPF
  
  if (salBruto < 1903.98){
    salLiquido1 = salBruto;
  }
  if (salBruto > 1903.99 && salBruto < 2826.65){
    salLiquido1 = salBruto - (salBruto * 0.075);
  }
  if (salBruto > 2826.66 && salBruto < 3751.05){
    salLiquido1 = salBruto - (salBruto * 0.15);
  }
  if (salBruto > 3751.06 && salBruto < 4664.68){
    salLiquido1 = salBruto - (salBruto * 0.225);
  }
  if (salBruto > 4665.69){
    salLiquido1 = salBruto - (salBruto * 0.275);
  }
  double valeCoxinha = salBruto * 0.20;
  double valeTransporte = salBruto * 0.06;

  //Calculo do INSS
  double inss = 0;
  if (salBruto <= 1302){
    inss = 0;
  }
  if (salBruto > 1302.01 && salBruto < 2571.29){
    inss = salBruto * 0.09;
  }
  if (salBruto < 2571.30 && salBruto < 3856.94){
    inss = salBruto * 0.12;
  }
  if (salBruto < 3856.95 && salBruto < 7507.49){
    inss = salBruto * 0.14;
  }
  if (salBruto > 7507.50){
    inss = 854.14;
  }

  double salario = salLiquido1 - inss - valeCoxinha - valeTransporte;
  printf("Salário pago pela empresa é R$%.2f\n", salBruto);
  return salario;
}
  
/**
*@brief Função principal
*@param argc: Quantidade de argumentos
*@param argv: Argumentos
*@retval int: Retorna 0 caso o código seja executado corretamente
*/
int main(int argc, char *argv[]){
  if (argc != 3){
    printf("Número de argumentos inválido.\n");
  }

int hora = atoi(argv[1]);
int dia = atoi(argv[2]);

  if (hora <= 0 || hora > 16){
    printf("Horas inválidas.\n");
  }

  if (dia <= 0 || dia > 31){
    printf("Dias inválidos.\n");
  }

  double salario = salarioLiquido(hora, dia);
  printf("O salário líquido é: R$ %.2f\n", salario);


   return 0;
}