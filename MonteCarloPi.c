/*/

Igor Daniel Rocha de Jesus - CIC
202410511
Desenvolver programa para calculo do Pi utilizando Monte Carlo.

  /*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {

  
    int numTotalSort = 0; // Número total de sorteios
    int NumPontos = 0; // Número de pontos sorteados aleatoriamente dentro da circunferência

  printf("Digite a quantidade máxima de pontos que serão sorteados: ");
  scanf("%d", &numTotalSort);
  while (numTotalSort <= 0){
    printf("Número inválido, digite novamente: ");
    scanf("%d", &numTotalSort);
  }

    srand(time(NULL));

    for (int i = 0; i < numTotalSort; i++) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        if (pow(y,2) + pow(x,2) <= 1) // Verifica se os pontos sorteados estão dentro está dentro da circunferência de raio r =1
            NumPontos++;
        
    }

    double Pi = 4 * (double)NumPontos / numTotalSort;

    printf("Valor estimado de PI: %f\nNúmero de Pontos sorteados: %d \n", Pi, NumPontos);

    return 0;
}
