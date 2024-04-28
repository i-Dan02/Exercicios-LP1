#include <stdio.h>

int main() {
char ch1 = 'a';
  
  printf(" Digite um caractere: \n");
  scanf("%c", &ch1);

  if (ch1 >= 'A' && ch1 <= 'Z') {
    printf("O caractere '%c' é uma letra maiúscula.\n", ch1);
  } // Se for maiúscula, imprime a mensagem.
  
  if (ch1 >= 'a' && ch1 <= 'z') {
    printf("O caractere '%c' é uma letra minúscula.\n", ch1);
  } // Se for minúscula, imprime a mensagem.
  
  if (ch1 >= '0' && ch1 <= '9') {
    printf("O caractere '%c' é um número.\n", ch1);
  } //Se for número, imprime a mensagem.
    
  else {
    printf("O caractere '%c' é um caractere especial.\n", ch1);
  } // Caso não seja nenhum dos casos anteriores, imprime a mensagem.

  char ch2 = 81;
  //Atribui o valor da variável ch2 à 81
  
  printf("ch2 Em decimal: %d\n", ch2); //Imprime seu valor em decimal
  printf("ch2 Em octal: %o\n", ch2); //Imprime seu valor em octal
  printf("ch2 Em hexadecimal: %x\n", ch2); //Imprime seu valor em hexadecimal
  printf("ch2 Em caractere: %c\n", ch2); //Imprime seu valor em caractere

  char ch3 = ch2 + 32; 
  //Atribui o valor da variável ch3 à soma de ch2 + 32, pois para convertermos letras maiúsculas em letras minúsculas, basta somar 32 ao valor da variável ch2.
  
  printf("ch3 Em letra minúscula: %c\n", ch3); //Imprime seu valor em letra minúscula
  printf("ch3 Em decimal: %d\n", ch3); //Imprime seu valor em decimal
  printf("ch3 Em octal: %o\n", ch3); //Imprime seu valor em octal
  printf("ch3 Em hexadecimal: %x\n", ch3); //Imprime seu valor em hexadecimal
  
  return 0;
}