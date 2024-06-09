#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DadoMAX 6 
/**
*@brief Função que sorteia um dos 6 lados de um dado
*@param rand: função que randomiza números entre 1 e 6
*@retval None: não retorna valores
*/
int sortDado() {
    return rand() % DadoMAX + 1;
}

/**
*@brief Função que sorteia e permite repetição
*@retval sorteios: Retorna um dos números sorteados 
*/
int sortN() {
    int sorteios = 0;
    int cont[DadoMAX] = {0};
    int NumDiff = 0;

    while (NumDiff < DadoMAX) {
        int sorteado = sortDado();
        sorteios++;
        if (cont[sorteado - 1] == 0) {
            NumDiff++;
        }
        cont[sorteado - 1]++;
    }
    return sorteios;
}

/**
*@brief Função que conta a quantidade de sorteios e números sorteados e os imprime 
*@param reps: quantidade de sorteios
*/
void contSort(int reps) {
    int cont[DadoMAX] = {0};

    for (int i = 0; i < reps; i++) {
        int sorteado = sortDado();
        cont[sorteado - 1]++;
    }

    printf("Contagem de sorteios após %d repetições:\n", reps);
    for (int i = 0; i < DadoMAX; i++) {
        printf("Número %d: %d vezes\n", i + 1, cont[i]);
    }
}

/**
*@brief Função principal
*@param argc: Quantidade de argumentos
*@param argv: Argumentos
*@return int: retorna 0 caso o código seja executado corretamante
*/
int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s <quantidade_repeticoes>\n", argv[0]);
        return 1;
    }

    int reps = atoi(argv[1]);
    if (reps <= 0) {
        printf("A quantidade de repetições deve ser um número positivo.\n");
        return 1;
    }

    srand(time(NULL)); 

    int numSortN = sortN();
    printf("Número de sorteios necessários para sortear todos os números: %d\n", numSortN);

    contSort(reps);

    return 0;
}
