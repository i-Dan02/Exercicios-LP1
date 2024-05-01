// Igor Daniel Rocha de Jesus
// 202410511

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int NumSORTEADOS = 6;
  int NumMegaSENA = 60;

  printf("\x1b[32mMega Sena\x1b[37m\n");
  printf("Digite 6 números de 1 a 60\n");

  int numero1, numero2, numero3, numero4, numero5, numero6;

  scanf(" %d %d %d %d %d %d", &numero1, &numero2, &numero3, &numero4, &numero5,
        &numero6);

  while (numero1 > 60 || numero2 > 60 || numero3 > 60 || numero4 > 60 ||
         numero5 > 60 || numero6 > 60) {
    printf("Número maior que 60, digite novamente: ");
    scanf(" %d %d %d %d %d %d", &numero1, &numero2, &numero3, &numero4,
          &numero5, &numero6);
  }

  srand(time(NULL));

  int numSorteados[NumSORTEADOS];
  for (int i = 0; i < NumSORTEADOS; i++) {
    numSorteados[i] = 0;
  }

  int numSorteadosCont = 0;

  while (numSorteadosCont < NumMegaSENA) {
    int numSorteado = rand() % NumMegaSENA + 1;

    int repetido = 0;
    for (int i = 0; i < NumSORTEADOS; i++) {
      if (numSorteados[i] == numSorteado) {
        repetido = 1;
      }
    }

    if (!repetido) {
      numSorteados[numSorteadosCont] = numSorteado;
      numSorteadosCont++;

      printf("Numero sorteado: %d\n", numSorteado);
    } else {
      printf("Numero repetido: %d\n", numSorteado);
    }

    if (numero1 == numSorteado) {
      printf("Parabéns, você acertou o primeiro número: %d\n", numero1);
    }

    if (numero2 == numSorteado) {
      printf("Parabéns, você acertou o segundo número: %d\n", numero2);
    }

    if (numero3 == numSorteado) {
      printf("Parabéns, você acertou o terceiro número: %d\n", numero3);
    }

    if (numero4 == numSorteado) {
      printf("Parabéns, você acertou o quarto número: %d\n", numero4);
    }

    if (numero5 == numSorteado) {
      printf("Parabéns, você acertou o quinto número: %d\n", numero5);
    }

    if (numero6 == numSorteado) {
      printf("Parabéns, você acertou o sexto número: %d\n", numero6);
    }
  }
  return 0;
}