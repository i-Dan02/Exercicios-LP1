#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

    /**
     *@brief Verifica e imprime se o caractere é uma letra ou um número
     @param str: string a ser analisada
     @retval void
    */
void verify(const char *str) {
    bool num = true;
    bool alfaNum = true;

    // \O é o chamado terminador nulo e determina o fim de uma string
    if (str[0] == '\0') {
        printf("O valor é nulo.\n");
        return;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        //isdigit é uma função que verifica se o caractere é um dígito
        if (!isdigit(str[i])) {
            num = false;
        }
        //isalnum é uma função que verifica se o caractere é alfanumérico
        if (!isalnum(str[i])) {
            alfaNum = false;
        }
    }

    if (num) {
        printf("Número.\n");
    }
    else if (alfaNum) {
        printf("Alfanumérico.\n");
    }
    else {
        printf("NULO.\n");
    }

}

/**
*@brief Imprime os números em sequência
*@param valor: valores que serão impressos em sequência
*/
void sequencia(int valor) {
    printf("Sequência até %d:\n", valor);
    for (int i = 1; i <= valor; i++){
        printf("%d \n", i);
    }
}

/**
*@brief Função que imprime os números em sequência na ordem inversa
*@param valor: valores que serão impressos em sequência na ordem inversa
*/
void sequenciaInv(int valor){
    printf("Sequência até %d na ordem inversa:\n", valor);
    for (int i = valor; i >= 1; i--){
        printf("%d \n", i);
    }
}

/**
*@brief Função que imprime os números de forma alternada
*@param valor: valores que serão impressos de forma alternada
*/
void valoresAlternados(int valor){
    printf("Valores alternados até %d:\n", valor);
    int inicio = 1;
    int fim = valor;
    while (inicio <= valor){
        printf("%d ", inicio);
        if (inicio != fim){
            printf("%d \n", fim);
        }
        inicio++;
        fim--;
    }
}

/**
*@brief Função que verifica os números primos de 1 ao valor
*@param num: valores que serão verificados se são números primos
*retval true: se o número for primo
*/
    bool VerificaPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

/**
*@brief Imprime os números primos de 1 até o valor	
*@param valor: valores que serão impressos
*/
void primo(int valor){
    printf("Números primos até %d:\n", valor);
    for (int i = 2; i <= valor; i++){
        if (VerificaPrimo(i)){
            printf("%d \n", i);
        }
    }
}

/**
*@brief Função que verifica os números perfeitos
*@param num: valores que serão verificados se são perfeitos
*retval int: se o número for perfeito
*/

bool VerificaPerfeito(int num) {
    if (num <= 1) return false;
    int soma = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            soma += i;
            if (i != num / i) {
                soma += num / i;
            }
        }
    }
    return soma == num;
}

/**
*@brief Função que imprime os números perfeitos de 1 até o valor
*@param valor: valores que serão impressos
*/
void perfeito(int valor){
    printf("Números perfeitos até %d:\n", valor);
    for (int i = 1; i <= valor; i++) {
        if (VerificaPerfeito(i)) {
            printf("%d \n", i);
        }
    }
}

/**
*@brief Função principal
*@param argc: quantidade de argumentos
*@param argv: argumentos
*@retval int: retorna 0 se o programa rodar corretamente
*/
int main(int argc, char *argv[]){
    if (argc != 2){
        printf("Número de argumentos inválidos!\nTente ./main <valor>: %s\n", argv[0]);
        return 1;
    }
    int valor = atoi(argv[1]);
    if (valor <= 0){
        printf("O valor deve ser maior que zero.\n");
        return 1;
    }

    if (valor > 1000){
        printf("Pra que tudo isso? Ta inventando arte.\n");
    }

    verify(argv[1]);
    sequencia(valor);
    sequenciaInv(valor);
    valoresAlternados(valor);
    primo(valor);
    perfeito(valor);

    return 0;
}