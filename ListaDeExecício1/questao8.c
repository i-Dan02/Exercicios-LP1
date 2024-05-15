/*/

Igor Daniel Rocha de Jesus - CIC
202410511
Questão 8 Escreva um programa que leia um número inteiro positivo e retorne o valor da soma de todos os números inteiros de zero até o número fornecido. A soma dos números inteiros de 1 até n se calcula como . Imprima um resultado na tela. Como fazer para lidar com o fato de que o usuário pode fornecer um número negativo? (use apenas o que vimos em sala de aula até agora); 

➢ Faça o algoritmo que represente este programa;

/*/

#include <stdio.h>


int main() {
  
  int n, soma = 0;
  
  printf("Digite um número inteiro positivo: \n");
  scanf(" %d", &n);

  if (n <= 0){
    printf("Número menor que 0, digite um número inteiro positivo: \n");
    scanf(" %d", &n);
  }

  for (int i = 1; i <= n; i++) {
      soma += i;
  }

  printf("\nSOMA: %d", soma);
  return 0;
}