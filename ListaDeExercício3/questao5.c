/*
Igor Daniel Rocha de Jesus

Questão 5.
Utilizando o exercício anterior, desenvolva:
    ◦ Somatória das linhas e colunas, quais devem ser armazenadas em array(s);
    ◦ Calcule a média, mediana (ordenação obrigatória) e desvio padrão dos valores das linhas e colunas;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>


float media(int vet[][100], int n, int m, float media){

  int i, j;
  float soma = 0;

  for(i = 0; i < n; i++){
      for(j = 0; j < m; j++){
          soma += vet[i][j];
      }
  }

  printf("Soma: %.1f \n", soma);
  media = soma / (n * m);

  return media;
}

int compare(const void *a, const void *b) {
  return (*(int *)a - *(int *)b);
}

float mediana(int vet[][100], int n) {

  int totalElements = n * 100; 
  int *flatArray = malloc(totalElements * sizeof(int)); 

  int k = 0;
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < 100; j++) {
          flatArray[k++] = vet[i][j];
      }
  }

  qsort(flatArray, totalElements, sizeof(int), compare);

  
  if (totalElements % 2 == 0) {
      return (flatArray[totalElements / 2 - 1] + flatArray[totalElements / 2]) / 2.0;
  } else { 
      return flatArray[totalElements / 2];
  }

  free(flatArray); 
}

float desvPad(int vet[][100], int n, float media, float desvio) {
    int i, j;
    float soma = 0;
    int totalElements = n * 100;

    for (i = 0; i < n; i++) {
        for (j = 0; j < 100; j++) {
            soma += pow(vet[i][j] - media, 2); 
        }
    }

    desvio = sqrt(soma / totalElements); 

    return desvio;
}

int main(){

  int n = 100;
  int m = 100;
  int val[n][m];
  int i = 0, j = 0;
  int pos = 0;

  srand(time(NULL));

  for (i = 0; i < n; i++){
      for (j = 0; j < m; j ++){
          val[i][j] = rand() % 1001;
          pos = pos + 1;
          printf("%d - [%d] [%d] \n", pos, val[i][j], j);
      }
  }

  // Call media with the correct arguments
  float med = media(val, n, m, med);  
  float medianA = mediana(val, n);
  printf("Média: %f \n", med);
  printf("Mediana: %f \n", medianA);
  float desvio = desvPad(val, n, med, desvio);

}