/*/
Igor Daniel Rocha de Jesus - 202410511
Ciência da Computação

Questão 3. Escreva um programa, usando quando necessário o operador (?), que:

➢ Declare três variáveis de tipo int, vamos chamar de a, b e c mas você pode escolher outro identificador se achar mais apropriado;

➢ Peça ao usuário para digitar dois números inteiros, obtenha-os da entrada padrão, usando scanf, e atribua os valores digitados às variáveis a e b respectivamente;

➢ Atribua à variável c a somas das variáveis a e b, imprima o resultado na tela em formato hexadecimal;

➢ Atribua à variável c o produto das variáveis a e b, imprima o resultado na tela em formato octal;

➢ Atribua à variável c o módulo (valor absoluto) da diferença entre as variáveis a e b, imprima o resultado na tela; (valor absoluto: se c < 0 imprimir -c, caso contrário imprima c);

➢ Atribua à variável c o quociente entre variáveis a e b, imprima o resultado na tela; (se b = 0 a divisão não é possível e um aviso deve ser apresentado ao usuário);

➢ Se a divisão anterior for possível, determinar se a é divisível de forma exata por b, mostrar o resultado na tela;

/*/
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