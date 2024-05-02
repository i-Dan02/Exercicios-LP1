#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
  int i, j ;
  int v2[6] ;
  int sorteados[60];
  int contSort = 1;

  for(i = 0; i < 6; i++){
    printf("Digite seu %dº número que escolheu para o sorteio: ", i + 1);
    scanf("%d", &v2[i]);
    while(v2[i] < 1 || v2[i] > 60){
      printf("Número inválido, digite novamente: ");
      scanf("%d", &v2[i]);
      for (int j = 0; j < i; j++) {
      if (v2[i] == v2[j]) {
          printf("Numero ja escolhido, digite outro numero: ");
          i--; 
          break;
  }
    }
  }
  }
  printf("\n");

  srand(time(NULL));

  while (contSort > 0 ){
  for (j = 0; j < 6; j++){
    sorteados[j] = 1 + rand() % 60;
    printf("\nSorteado: %d ", sorteados[j]);
    contSort ++;
    if (v2[0] == sorteados[j] || v2[1] == sorteados[j] || v2[2] == sorteados [j] || v2[3] == sorteados[j] || v2[4] == sorteados[j] || v2[5] == sorteados[j]){
      printf("Acertou! Precisou de %d sorteios", contSort); 
    }
  }
}
}
