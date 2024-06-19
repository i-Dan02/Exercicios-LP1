#include <stdio.h>

int main( int argc, char *argv[]) {
  
  if (argc <=1){
    printf("No arguments provided\n");
    return -1;
  }
  int n = atoi(argv[1]);

  int vect[n];

  for (int i=0; i<n; i++)
    vect[i]=i;

  int soma = 0;
  for (int i=0; i<n; i++)
    soma += vect[i];

  printf("Tamanho = %d \nSoma = %d\n", n ,  soma);
}