/* 
Questão 5. Utilizando o exercício anterior, desenvolva:
◦ Somatória das linhas e colunas, quais devem ser armazenadas em array(s);
◦ Calcule a média, mediana (ordenação obrigatória) e desvio padrão dos valores das linhas e colunas;
*/

#include <stdio.h>

// Função para preencher o array tridimensional com valores sequenciais
void seqArray(int array[10][20][5]) {
    int val = 0;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 20; j++) {
            for(int k = 0; k < 5; k++) {
                array[i][j][k] = val++;
            }
        }
    }
}

// Função para imprimir os valores do array tridimensional
void impArray(int array[10][20][5]) {
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 20; j++) {
            for(int k = 0; k < 5; k++) {
                printf("array[%d][%d][%d] = %d\n", i, j, k, array[i][j][k]);
            }
        }
    }
}

int main() {

  int dim1[10];
  int dim2[20];
  int dim3[5];
  
    int array[10][20][5];

    // Preenche o array com valores sequenciais
    seqArray(array);

    // Imprime os valores do array
    impArray(array);

    return 0;
}
