#include <stdio.h>
#include <stdlib.h>

/**
*@brief: Função que calcula o MDC
*@param a: Primeiro número
*@param b: Segundo número
*@retval mdc: retorna o menor divisor comum entre o número a e o número b digitado
*/
int calcularMDC(int a, int b) {
    int menor = (a < b) ? a : b; 
    int mdc = 1; 

    for (int i = 1; i <= menor; i++) {
        if (a % i == 0 && b % i == 0) {
            mdc = i; 
        }
    }
    return mdc;
}

/**
*@brief: Função principal
*@param argc: Quantidade de argumentos
*@param argv: Argumentos
*@retval int: Retorna 0 se o programa rodar corretamente
*/
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Faça: %s <numero1> <numero2>\n", argv[0]);
        return 1;
    }
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    if (num1 <= 0 || num2 <= 0) {
        printf("Insira números positivos. \n");
        return 1;
    }

    int mdc = calcularMDC(num1, num2);
    printf("O máximo divisor comum de %d e %d é: %d\n", num1, num2, mdc);

    return 0;
}