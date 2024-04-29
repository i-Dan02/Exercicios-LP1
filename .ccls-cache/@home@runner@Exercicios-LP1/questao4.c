/*/
Igor Daniel Rocha de Jesus - 202410511
Ciência da Computação

Questão 4. Escreva um programa, usando quando necessário o operador (?), que:
➢ Declare uma variável de tipo int, vamos chamar de cha mas você pode escolher outro identificador se achar mais apropriado;

➢ Peça ao usuário para digitar um números inteiros positivo, obtenha-o da entrada padrão, usando scanf, e atribua os valores digitados à variável cha; (se o valor fornecido for negativo, converter no correspondente valor positivo);

➢ Identifique se o valor fornecido pelo usuário faz parte dos valores utilizados para a representação de caracteres imprimíveis da tabela ASCII e imprima na tela, utilizando printf, o caractere em formato
numérico decimal, octal, hexadecimal e como caractere;

➢ Se o valor estiver no intervalo dos caracteres não imprimíveis, menores que 32, converter no caractere 32 e imprima na tela, utilizando printf, o caractere em formato numérico decimal, octal, hexadecimal e como caractere;

➢ Se o valor fornecido for maior que o valor máximo do intervalo, 127, utilizar o operador % para converter num valor do intervalo dos caracteres e aplique c ou d;

/*/

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