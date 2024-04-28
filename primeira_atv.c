// Livraria
#include <stdio.h>

// Declarando variaveis
int main() {
  float v1 = 0;
  float var1 = 0;
  float var2 = 0;
  int opt = 0;

  // Insere o valor do primeiro número da operação
  printf("Entre com primeiro valor:");
  scanf(" %f", &var1);

  // Insere o valor do segundo número da operação
  printf("Entre com segundo valor:");
  scanf(" %f", &var2);

  // Escolhe a operação
  printf("1: Adição \n2: Subtração \n3: Multiplicação \n4: Divisão \n");
  scanf(" %i", &opt);

  // Calcula a operação de soma
  if (opt == 1){
    v1 = var1 + var2;
    //Imprime a operação de soma
    printf("Resultado da soma0: %f", v1);
  }
  
  // Calcula a operação de subtração  
  if (opt == 2){
    v1 = var1 - var2;
    //Imprime a operação de subtração
    printf("O resultado da subtração é: %f", v1);
  }

  // Calcula a operação de multiplicação
  if (opt == 3){
    v1 = var1 * var2;  
    // Imprime a operação de multiplicação
    printf("O resultado da multiplicação é: %f", v1);
  }

  // Calcula a operação de divisão
  if (opt == 4){
    v1 = var1 / var2;
    // Imprime a operação de divisão
    printf("O resultado da divisão é: %f", v1);
  }

  return 0;
}