/*/

Igor Daniel Rocha de Jesus - CIC
202410511

Questão 10. Escreva um programa que leia da entrada padrão o lado de um quadrado e imprima:

➢ O tamanho da diagonal do mesmo;

➢ O valor do perímetro;

➢ Sua área.
  
/*/

#include<stdio.h>
#include<math.h>

int main (){

  float lado;

  printf("Digite o valor do lado do quadrado: ");
  scanf("%f", &lado);

  float diagonal = lado * sqrt(2);
  float perimetro = lado * 4;
  float area = pow(lado,2);

  printf("A seguir, os valores: \n- Diagonal do quadrado: %2.f\n- Perímetro: %2.f\n- Área: %2.f", diagonal, perimetro, area);

      return 0;
  }