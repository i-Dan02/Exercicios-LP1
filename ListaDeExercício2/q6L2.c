/*/
Questão 6. Crie um programa qual entre com argumentos e desenvolva funções que:
6.1 Retorne o número sorteado de um dado;
6.2 Verifique o número de sorteios necessários para que sejam sorteados todos os números, por pelo menos 1 vez;
6.3 Em uma quantidade grande de repetições (1 milhão ou mais, informada via argumento), quantas vezes cada valor foi sorteado;
/*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define DadoMAX 6 

int sortDado() {
    return rand() % DadoMAX + 1;
}

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
