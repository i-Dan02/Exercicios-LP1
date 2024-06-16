#include <stdio.h>
#include <string.h>

#define tam 10

// Função para trocar dois elementos
void swap(char* a, char* b) {
    char temp[100];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

// Função de ordenação força bruta (bubble sort)
void bubbleSort(char arr[tam][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            //A função strcmp é usada para comparar duas strings. Ela retorna um valor inteiro que indica a direfência entre as strings. Se as strings são iguais, o valor retornado é zero. Se a primária for menor que a segunda, o valor é negativo. Se a primeira for maior que a segunda, o valor é positivo.
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Função para imprimir o array
void imprimeArray(char arr[tam][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    // Array com nomes
    char nomes[tam][100];
    
    for (int i=0; i<tam; i++){
    printf("Digite um nome: ");
    scanf("%s", nomes[i]);
    }

    printf("Ordem atual dos nomes:\n");
    imprimeArray(nomes, tam);

    // Ordenando o array
    bubbleSort(nomes, tam);

    printf("\nNomes ordenados:\n");
    imprimeArray(nomes, tam);

    // Imprimindo o primeiro, último e nome mediano
    printf("\nPrimeiro nome: %s\n", nomes[0]);
    printf("Ultimo nome: %s\n", nomes[tam - 1]);
    printf("Nome mediano: %s\n", nomes[tam / 2]);

    // Imprimindo os nomes em ordem inversa
    printf("\nNomes inversamente ordenados:\n");
    for (int i = tam - 1; i >= 0; i--) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
