/*/
Igor Daniel Rocha de Jesus
202410511

Questão 7. Escreva um programa que leia um número inteiro e, utilizando o operador %, converta ele num valor entre 1 e 6. Imprima o resultado na tela;

/*/
#include <stdio.h>

int main() {
    int num, res;

    printf("Digite um número: ");
    scanf("%d", &num);

    res = ((num % 6) + 6) % 6 + 1;

    printf("O resultado é: %d\n", res);

    return 0;
}
