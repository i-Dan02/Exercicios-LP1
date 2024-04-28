/*/
Igor Daniel Rocha de Jesus
202410511
Questão 5. Escreva um programa que peça ao usuário para fornecer um número inteiro, obtenha-o da entrada padrão, usando scanf, e determine se o valor fornecido pode ser representado, sem perda de informação como um short int. Imprima na tela o valor fornecido, seguido das palavras “e maior que um short int” ou “este valor pertence ao intervalo dos short int”. Use apenas o operador condicional (?).
  /*/
#include <stdio.h>

int main() {
    int val, shortIntMax, shortIntMin;

    printf("Digite um número inteiro: ");
    scanf("%d", &val);
  
    shortIntMax = (1 << 15) - 1;
    shortIntMin = -(1 << 15);
  
    printf("%d %s\n", val, (val <= shortIntMax && val >= shortIntMin) ? "- Este valor pertence ao intervalo dos short int" : "- É maior que um short int");

    return 0;
}
