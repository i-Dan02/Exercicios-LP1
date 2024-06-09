/*/
4 Crie um programa qual entre com argumentos e desenvolva funções que:
4.1 Calcule o índice de massa corporal (IMC);
4.2 Deve apresentar resultado determinado pela faixa etária
/*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  double calcularIMC(int peso, double altura){
  double imc = (peso / (altura * altura)) ;
  return imc;
}
int main(int argc, char *argv[]) {
  if (argc != 3){
    printf("Informe peso e altura", argv[0]);
    return 1;
  }
  int peso = atoi(argv[1]);
  double altura = atof(argv[2]);

  while ( peso <= 0 || altura <= 0 || altura > 4){
    printf("Informe peso em KG e altura em METROS", argv[0]);
    return 1;
  }

  double imc = calcularIMC(peso, altura);
  printf("Seu IMC é: %.2f", imc);
  
  if (imc < 18.5){
    printf("Você está abaixo do peso. Se encontra na classificação MAGREZA\n");
    }
    
  if (imc > 18.5 && imc < 24.9){
    printf("Você está no peso normal. Se encontra na classificação NORMAL\n");
  }

  if (imc > 24.9 && imc < 29.9){
    printf("Você está com sobrepeso. Se encontra na classificação SOBREPESO\n");
  }

  if (imc > 30 && imc < 39.9){
    printf("Você está com obesidade grau I. Se encontra na classificação OBESIDADE.\n");
  }

if (imc > 40){
  printf("Você está com obesidade grau II. Se encontra na classificação OBESIDADE GRAVE.\n");
}
  
  return 0;
}