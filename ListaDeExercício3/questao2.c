/*
Igor Daniel Rocha de Jesus

Questão 2. Crie um array unidimensional e desenvolva:
◦ Utiliza funções quando possível;
◦ Array de inteiros para 10.000 elementos;
◦ Randomicamente insira valores, entre 0 e 1000 nos elementos;
◦ Descubra quais são os três maiores e menores valores;
◦ Calcule a média, mediana (ordenação obrigatória) e desvio padrão dos valores;
◦ Apresente as informações sobre os valores repetidos (qual valor, quantidade de vezes, etc);
◦ Insira os valores em um novo array com o tamanho exato dos elementos sem repetições;
◦ Calcule novamente a média, mediana (ordenação obrigatória) e desvio padrão dos valores, reutilizando função anteriormente desenvolvida;

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

float media(int *vet, int tam, float media){

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

float mediana(int array[], int tamanho) {
    
  qsort(array, tamanho, sizeof(int), comparar);
  if (tamanho % 2 == 0) {
      return (array[tamanho / 2 - 1] + array[tamanho / 2]) / 2.0;
  } else {
      return array[tamanho / 2];
  }
}

float desvPad (int *vet, int tam, float media, float desvPad){
    
    //É a raiz da somatória de cada número menos a média, elevado ao quadrado, dividido pelo número de elementos.
    
    int i;

    for (i = 0; i < tam; i++){
        desvPad = sqrt(pow((vet[i] - media), 2));
        printf("Desvio Padrao: %f - Número: %d - Média:  %f\n", desvPad, vet[i], media);
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

void contReps(int *vet, int tam, int *reps, int *values) {
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
int unicoArr(int *vet, int tam, int *unique_array) {
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
int val[n];
int i = 0;
int pos = 0;
int unique_size = 0;
int unique_array[n];
int repetitions[n];

  srand(time(NULL));

  for (i = 0; i < n; i++){
    val[i] = rand() % 1001;
    pos = pos + 1;
    printf("%d - %d \n", pos, val[i]);
  }

  
    float med = media(val, n, med);
    float medianA = mediana(val, n);
    printf("Média: %.1f \n", med);
    printf("Mediana: %.1f \n", medianA);
    valReps(val, n);
    float desvio = desvPad(val, n, med, desvio);
    contReps(val, n, repetitions, unique_array);
    unique_size = unicoArr(val, n, unique_array);
    printf("Array sem repetições: ");
    for (int i = 0; i < unique_size; i++){
        printf("Array sem repetições: %d\n", unique_array[i]);
    }    

}