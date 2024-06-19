#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    clock_t inicio, fim;
    double tempo;
    long int numCiclos = 1000000000;

    /*/printf("Digite o número de interações do for: ");
    scanf("%d", &numCiclos);/*/

    inicio = clock();
    for (int i = 0; i < numCiclos; i++) {
        asm("");
    }
    
    fim = clock();
    tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
    printf(" %f segundos\n", tempo);


    return 0;

}
    /*/ANOTAÇÕES
    
    LONG INT 100000000 CICLOS
    
    SEM OTIMIZAÇÃO : 0.084363 segundos
    FLAG -O1: 0.070597 segundos 
    FLAG -O2: 0.070996 segundos
    FLAG -O3: 0.073885 segundos
    FLAG -O0: 0.269969 segundos
    long int 1000000000 ciclos
    sem otimização : 0.792750 segundos
    FLAG -O1: 0.989859 segundos
    FLAG -O2: 0.758548 segundos
    FLAG -O3: 0.511051 segundos
    FLAG -O0: 2.714510 segundos

    FLAG -O3 executa mais rápido, pois otimiza mais o código.

    /*/

