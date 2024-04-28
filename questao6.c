/*/
Igor Daniel Rocha de Jesus
202410511
Questão 6. Escreva um programa que peça ao usuário para fornecer um número inteiro longo sem sinal, obtenha-o da entrada padrão, usando scanf, e determine se o valor fornecido pode ser representado, sem perda de informação como um int. Imprima na tela o valor fornecido, seguido das palavras “e maior que um int” ou “este valor pertence ao intervalo dos int”. Use apenas o operador condicional (?).
/*/
#include <stdio.h>

int main() {
    unsigned long val;
    int intMax;

    printf("Digite um número inteiro longo sem sinal: ");
    scanf("%lu", &val);

    intMax = (1 << 31) - 1;

    printf("%lu %s\n", val, (val <= intMax) ? "- Este valor pertence ao intervalo dos int" : "- É maior que um int");

    return 0;
}
