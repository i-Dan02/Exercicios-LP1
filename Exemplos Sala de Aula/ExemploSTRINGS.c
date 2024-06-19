#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 50

int main() {

  char frase[N];
  int i = 0;
  
  printf("Digite uma frase: \n");
  gets(frase);
  
  printf("Você digitou: %s\n", frase);
  while(frase[i] != '\0')
    if (frase[i++] != ' ')
      putchar (frase[i - 1]);
    else
      putchar('\n');
    printf("\n");
  return 0;
  
}