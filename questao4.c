#include <stdio.h>

int main() {
  int cha;

  printf("Digite um número inteiro: ", cha);
  scanf("%d", &cha);

  if (cha < 0){
    cha = cha < 0 ? -cha : cha;
  }

  if (cha < 32 ){
    cha = 32;
  }

  if (cha > 127){
    cha = cha % 128;
  }
  
  printf("O número é: %d\n", cha);
  printf("Em decimal é %d\n ", cha);
  printf("Em hexadecimal é %x\n", cha);
  printf("Em octal é %o\n", cha);
  printf("Em caractere é %c\n", cha);

  

}