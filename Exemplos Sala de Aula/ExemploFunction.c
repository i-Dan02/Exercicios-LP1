#include <stdio.h>
#include <math.h>

int a;
int loop( int nOfLoop );
int main() {
  
  printf("Digite um número inteiro: ");
  int a;
  scanf("%d", &a);
  int res = loop(14);
  printf("%d", res);
  
  
  /*/if (res  % 2 == 0)
    goto par;
  else
    goto impar;

  par:
    printf("\nO valor do quadrado é par");
  return 0;

  impar:
    printf("\nO valor do quadrado é ímpar");
  /*/

}

int quadrado(int a) {
  
int quadrado = pow(a,2);
printf("O valor do quadrado é : %d\n", quadrado);
printf("<b\n");
  return quadrado;
}

int loop(int nOfLoop ){
  unsigned int soma = 0;

  for (int i = 0; i < nOfLoop; i++){
    soma +=2;
  }
  return soma;
}