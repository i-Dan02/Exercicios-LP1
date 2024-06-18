/*
Questão 3
Questão anterior, porém com float.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

float media(float *vet, int tam, float media){

  int i;
  float soma = 0;

  for(i = 0; i < tam; i++){
    soma += vet[i];
  }

  printf("Soma: %.1f \n", soma);
  media = soma / tam;

  return media;
}

int comparar(const void *a, const void *b) {

  return (*(int *)a - *(int *)b);
}

float mediana(float vet[], int tam) {

  qsort(vet, tam, sizeof(int), comparar);
  if (tam % 2 == 0) {
      return (vet[tam / 2 - 1] + vet[tam / 2]) / 2.0;
  } else {
      return vet[tam / 2];
  }
}

float desvPad (float *vet, int tam, float media, float desvPad){

    //É a raiz da somatória de cada número menos a média, elevado ao quadrado, dividido pelo número de elementos.

    int i;

    for (i = 0; i < tam; i++){
        desvPad = sqrt(pow((vet[i] - media), 2));
        printf("Desvio Padrao: %f - Número: %f - Média:  %f\n", desvPad, vet[i], media);
    }

    return desvPad;
}


void valReps(int vet[], int tam) {
    int frequencia[1000 + 1] = {0};

    for (int i = 0; i < tam; i++) {
        frequencia[vet[i]]++;
    }

    printf("Valores repetidos:\n");
    for (int i = 0; i <= 1000; i++) {
        if (frequencia[i] > 1) {
            printf("Valor: %d, Quantidade de vezes: %d\n", i, frequencia[i]);
        }
    }
}

void contReps(float *vet, int tam, int *reps, int *values) {
    int unique_count = 0;
    for(int i = 0; i < tam; i++) {
        int j;
        for(j = 0; j < unique_count; j++) {
            if(values[j] == vet[i]) {
                reps[j]++;
                break;
            }
        }
        if(j == unique_count) {
            values[unique_count] = vet[i];
            reps[unique_count] = 1;
            unique_count++;
        }
    }
    printf("Valores e suas quantidades de repetições:\n");
    for(int i = 0; i < unique_count; i++) {
        printf("Valor %d: %d vezes\n", values[i], reps[i]);
    }
}


// Função para criar um novo array sem repetições
int unicoArr(float *vet, int tam, int *unique_array) {
    int unique_count = 0;
    for(int i = 0; i < tam; i++) {
        int j;
        for(j = 0; j < unique_count; j++) {
            if(unique_array[j] == vet[i]) {
                break;
            }
        }
        if(j == unique_count) {
            unique_array[unique_count] = vet[i];
            unique_count++;
        }
    }
    return unique_count;
}

int main(){

int n = 10000;
float val[n];
int i = 0;
int pos = 0;
int unique_size = 0;
int unique_array[n];
int repetitions[n];

  srand(time(NULL));

  for (i = 0; i < n; i++){
    val[i] = rand() % 1001;
    pos = pos + 1;
    printf("%d - %f \n", pos, val[i]);
  }


    float med = media(val, n, med);
    float medianA = mediana(val, n);
    printf("Média: %.1f \n", med);
    printf("Mediana: %.1f \n", medianA);
    float desvio = desvPad(val, n, med, desvio);
    contReps(val, n, repetitions, unique_array);
    unique_size = unicoArr(val, n, unique_array);
    printf("Array sem repetições: ");
    for (int i = 0; i < unique_size; i++){
        printf("Array sem repetições: %d\n", unique_array[i]);
    }    

}