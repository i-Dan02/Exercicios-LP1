#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int matriz[5][5];
  int i,j;
  float soma =0;
  int mult =0;
  float cont = 0;
  float media = 0;
  
for ( i=0; i<5; i++ )
  for ( j=0; j<5; j++ ){
    printf ("\nElemento[%d][%d] = ", i, j);
    scanf ("%d", &matriz[ i ][ j ]);
     soma += matriz[i][j];
     cont++;
  } 
  for ( i=0; i<5; i++ )
    for( j=0; j<5; j++){
      mult = i * j;
      printf("\n[%d] [%d] = %d\n multiplicação: %d\n",i, j,  matriz[i][j], mult);
    }
  media = soma/cont;
  printf("\nSoma: %.2f", soma);
  printf("\nMÉDIA: %.2f/%.2f = %.2f", soma, cont,  media);
}