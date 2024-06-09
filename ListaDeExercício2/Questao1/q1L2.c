/*/
Questão 1. Crie um programa qual entre com um argumento e desenvolva funções que:
1.1 Verifique se é um valor numérico ou alfanumérico, e ou nulo;
1.2 Mostrar na tela os valores sequencialmente, até o valor informado;
1.3 Mostrar na tela os valores sequencialmente, até o valor informado na ordem inversa;
1.4 Mostrar na tela os valores até o valor informado, alternando entre primeiro e último;
1.5 Calcular todos os números primos, até o valor informado;
1.5.1 Número primo é aquele que é divisível somente por 1 e por ele mesmo.
1.6 Calcular todos os números perfeitos, até o valor informado;
1.6.1 Número perfeito é aquele que é a soma de seus fatores. Por exemplo, 6 é divisível por 1, 2 e 3 ao passo que 6 = 1 + 2 + 3
/*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

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

void sequencia(int valor) {
    printf("Sequência até %d:\n", valor);
    for (int i = 1; i <= valor; i++){
        printf("%d \n", i);
    }
}

void sequenciaInv(int valor){
    printf("Sequência até %d na ordem inversa:\n", valor);
    for (int i = valor; i >= 1; i--){
        printf("%d \n", i);
    }
}

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

//Função bool retorna true ou false
bool VerificaPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void primo(int valor){
    printf("Números primos até %d:\n", valor);
    for (int i = 2; i <= valor; i++){
        if (VerificaPrimo(i)){
            printf("%d \n", i);
        }
    }
}

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

void perfeito(int valor){
    printf("Números perfeitos até %d:\n", valor);
    for (int i = 1; i <= valor; i++) {
        if (VerificaPerfeito(i)) {
            printf("%d \n", i);
        }
    }
}

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
