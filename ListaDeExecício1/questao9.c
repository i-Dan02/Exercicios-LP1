/*/

Igor Daniel Rocha de Jesus - CIC
202410511

Questão 9. Escreva um programa que:
  ➢ Declare três variáveis de tipo float, vamos chamar de x, y e z mas você pode escolher outro identificador se achar mais apropriado;
  
  ➢ Peça ao usuário para digitar dois números de ponto flutuante, obtenha-os da entrada padrão, usando scanf, e atribua os valores digitados às variáveis x e y respectivamente;
  
  ➢ Considerando que x e y são coordenadas num plano cartesiano, identifique em que lado da curva se encontra (esquerda, direita ou na curva). Imprima o resultado na tela;
  
  ➢ Atribua à variável z o valor da distância euclidiana do ponto (x, y) ao centro de coordenadas;(distância euclidiana se calcula como , pode utilizar a função sqrt() fornecida no arquivo de cabeçalho math.h)
  
  ➢ Atribua à variável z o produto entre as variáveis x e y, imprima o resultado na tela em notação científica;
  
/*/

#include<stdio.h>
#include<math.h>

int main (){

  float x, y, z;

  printf("Digite dois números de ponto flutuante: ");
  scanf("%f %f", &x, &y);
  
  float a, b, c, d; 

  //Equação da curva: y = 2x + 1
  a = 2; 
  b = -1; 
  c = -1; 

  d = a * x + b * y + c;

  if (d > 0) {
  printf("O ponto (%.2f, %.2f) está à direita da curva.\n", x, y);
  }
  
  if (d < 0) {
  printf("O ponto (%.2f, %.2f) está à esquerda da curva.\n", x, y);
  } 
  
  if (d == 0) {
  printf("O ponto (%.2f, %.2f) está na curva.\n", x, y);
  }

      return 0;
  }