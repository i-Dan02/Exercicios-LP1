#include <stdio.h>

int main() {
  int a, b, c;

  printf("Digite um número inteiro para a: ");
  scanf( "%d", &a );
  printf("Digite um número inteiro para b: ");
  scanf( "%d", &b );

  c = a+b;
  
  printf("A soma de %d e %d é igual a %d\n", a, b, c);
  printf("O valor de %d em hexadecimal é %x\n\n", c, c);

  c = a*b;

  printf("A multiplicaçao de %d e %d é igual a %d\n", a, b, c);
  printf("O valor de %d em octal é %o\n\n", c, c);

  int dif;
  
  dif = a - b;

  c = dif < 0 ? -dif : dif;

  printf("O modulo da diferenca entre %d e %d e: %d\n\n", a, b, c);

  c = a/b;
  
  if(b>0){
    printf("O quociente de %d e %d é igual a %d.\n", a, b, c);
  }
    
  else{
    printf("Não é possível dividir por 0.\n");
  }

  printf("O resultado da divisão de %d e %d é igual a %d.\n", a, b, c);

  
  return 0;
}