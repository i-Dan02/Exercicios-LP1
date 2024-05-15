#include <stdio.h>
#include <stdlib.h>
#include<time.h>

  int i, j ;
  int v2[6] ;
  int sorteados[60];
  int contSort = 1;

  int entradav2(int v2[6]) {
  for(i = 0; i < 6; i++){
    printf("Digite seu %dº número que escolheu para o sorteio: ", i + 1);
    scanf("%d", &v2[i]);
    while(v2[i] < 1 || v2[i] > 60){
      printf("Número inválido, digite novamente: ");
      scanf("%d", &v2[i]);
    }
    for (int j = 0; j < i; j++) {
      if (v2[i] == v2[j]) {
          printf("Numero ja escolhido, digite outro numero: ");
          i--; 
          break;
  }
    }
  }
  }

  int sorteio(int sorteados[60]) {
  srand(time(NULL));
  while (contSort > 0 ) {
  for (j = 0; j < 6; j++){
    sorteados[1] = 1 + rand() % 60;
    sorteados[2] = 1 + rand() % 60;
    sorteados[3] = 1 + rand() % 60;
    sorteados[4] = 1 + rand() % 60;
    sorteados[5] = 1 + rand() % 60;
    sorteados[6] = 1 + rand() % 60;
    
    printf("\nSorteado: %d %d %d %d %d %d ", sorteados[1], sorteados[2], sorteados[3], sorteados[4], sorteados[5], sorteados[6]);
    contSort ++;
    if (v2[0] == sorteados[j] || v2[1] == sorteados[j] || v2[2] == sorteados [j] || v2[3] == sorteados[j] || v2[4] == sorteados[j] || v2[5] == sorteados[j]){
      printf("Acertou! Precisou de %d sorteios", contSort); 
    }
  }
}
}
  int main ( ){

    entradav2(v2);
    sorteio(sorteados);
  
    return 0;
  }
