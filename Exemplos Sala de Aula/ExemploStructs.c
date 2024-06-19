#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] ){
  struct pessoa{
  char nome[50];
  char snome[50];
  int idade;
  
  };

  struct pessoa myPessoa;
  printf("--------------Cadastro------------\n");
  printf("Nome: ");
  fflush(stdin);
  fgets(myPessoa.nome, 50, stdin);
  printf("Sobrenome: ");
  fflush(stdin);
  fgets(myPessoa.snome, 50, stdin);
  printf("Idade: ");
  fflush(stdin);
  scanf("%d", &myPessoa.idade);
  printf("\n\nCadastro \n");
  printf("Nome: %s %s", myPessoa.nome, myPessoa.snome);
  printf("Idade: %d\n", myPessoa.idade);
  
}