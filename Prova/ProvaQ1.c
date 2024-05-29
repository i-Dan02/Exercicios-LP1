/*

Igor Daniel Rocha de Jesus
202410511

  1. (peso 5,0) Desenvolva um programa, atenção utilizar regra UESC (indicando referência e considerando casas
  decimais e aproximação dos valores), que receba os valores e calcule:
  a) De acordo com a matéria, especifique o número de créditos a serem realizados (mínimo 2 e máximo 10);
  b)Deve ser calculado a média, indicando a situação do aluno e o resultado;
  c) Deve calcular a nota para Prova Final;
  d)Considerar o número de faltas para o resultado final, considere cada crédito 15 horas-aula;
  e) Apresentar ficha de avaliação do aluno, com todas notas, situação e médias;
  */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int numCred;
  //Pede ao usuário que digite o número de créditos
  printf("Número de créditos: ");
  scanf("%d", &numCred);

  //Loop que verifica se o número de créditos é válido
  while (numCred < 2 || numCred > 10){
    printf("Número de créditos inválido. (Mínimo 2 e máximo 10). Digite novamente: \n");
    scanf("%d", &numCred);
  }


  //Carga horária: cada crédito equivale a +15 horas-aula
  int ch = numCred * 15;
  printf ("Carga horária: %d horas-aula\n", ch);


  //Declara as variáveis
  float soma;
  float nota[numCred];
  int peso[numCred];
  int totPeso = 0;

  //Loop que pede ao usuário que digite as notas
  for (int i = 0; i < numCred; i++){
    printf("Nota %d: ", i+1);
    scanf("%f", &nota[i]);
    
    //Loop que verifica se alguma nota digitada é inválida. Se for, digita novamente
    while (nota[i] < 0 || nota[i] > 10){
      printf("Nota inválida. Digite novamente: \n");
      scanf("%f", &nota[i]);
    }
    printf("Peso %d: ", i+1);
    scanf("%d", &peso[i]);
    
    //Loop que verifica se algum peso digitado é inválido. Se for, digita novamente
    while (peso[i] < 0 || peso[i] > 10 || peso[i] % 1 != 0){
      printf("Peso inválido. Digite novamente: \n");
      scanf("%d", &peso[i]);
    }

    //Cálculo da soma com os pesos e total de pesos
    soma += nota[i] * peso[i];
    totPeso += peso[i];
  }
  printf("Soma: %.1f\n", soma);

  //Cálculo da média
  float media = soma / totPeso;
  printf("Média: %.1f\n", media);

  //Verifica se o aluno foi aprovado ou reprovado
  if (media >= 7){
    printf("Aprovado\n");
  }
    //Reprovado, vai pra final
  else {
    printf("Sua nota não foi o suficiente. Partiu FINAL!! \n");
  }

  //Número de faltas no semestre
  int faltas = 0;
  printf("Digite o números de faltas no semestre: ");
  scanf(" %d", &faltas);

  //Cálculo de quanto precisa para ser aprovado na prova final
  float provaFinal = 0, precisa = 0;
  float  mediaFinal = 0;
  if (media < 7){
  precisa = (5-media*0.6)/0.4;
  printf("Precisa tirar %.1f na prova final para passar.\n", precisa);

  //Pede ao usuário que digite a nota da prova final
  printf("Nota da prova final: ");
  scanf("%f", &provaFinal);
  
  //Verifica se a nota da prova final é válida
  while (provaFinal < 0 || provaFinal > 10){
    printf("Nota deve ser maior que 0 e menor que 10. Digite novamente: \n");
    scanf("%f", &provaFinal);
  }

  //Verifica através do cálculo da média final se o aluno foi aprovado ou reprovado pela prova final
  mediaFinal = (media * 6 + provaFinal * 4) / 10;
  if (mediaFinal < 5){
    printf("Poxa, você não alcançou a média. Vamos deixar pro próximo semestre😓😓\n");
  }
  else {
    printf("Aprovado pela prova final!😀😀\n");
  }
  }

  //Ficha de avaliação
  printf("\nFicha de avaliação do aluno(a): \n");
  printf("-----------------------------------------------\n");
  printf(" Número de créditos |        %d\n", numCred);
  printf("-----------------------------------------------\n");
  printf("  Carga horária     |   %d horas-aula\n", ch);
  printf("-----------------------------------------------\n");
  printf("       Notas        |         Peso     \n");
  printf("-----------------------------------------------\n");
  //Loop que imprime as notas e seus respectivos pesos
  for (int i = 0; i < numCred; i++){
    if (nota[i] < 7){
      printf(" Notas %d |  :\x1b[31m %.1f\x1b[37m   |         Peso %d\n", i+1, nota[i], peso[i]);
      printf("-----------------------------------------------\n");
    }
    else{
      printf(" Notas %d |  :\x1b[32m %.1f\x1b[37m   |         Peso %d \n", i+1, nota[i], peso[i]);
      printf("-----------------------------------------------\n");
    }
  }
  //Condição que verifica se a média é menor que 7
  if (media < 7) {
    //Sendo menor que 7, imprime a média e a situação de prova final
    printf("       Média        |         \x1b[31m%.1f\x1b[37m\n", media);
    printf("-----------------------------------------------\n");
    printf("       Situação     |    \x1b[31m Prova Final\x1b[37m\n");
    printf("-----------------------------------------------\n");
    //Condição que verifica a nota da prova final
    if (provaFinal < precisa){
      //A nota da prova final sendo menor que a nota necessária para passar, imprime a nota da prova final e a situação de reprovado
      printf(" Prova Final        |        \x1b[31m %.1f\x1b[37m\n", provaFinal);
      printf("-----------------------------------------------\n");
      printf("    Média Final     |        \x1b[31m %.1f\x1b[37m\n", mediaFinal);
      printf("-----------------------------------------------\n");
      printf("             \x1b[31m Reprovado \x1b[37m\n");
      printf("-----------------------------------------------\n");
    }
    else{
      //Caso não seja menor que a nota necessária, imprime a nota da prova final e a situação de aprovado pela prova final
      printf(" Prova Final        |        \x1b[32m %.1f\x1b[37m\n", provaFinal);
      printf("-----------------------------------------------\n");
      printf("    Média Final     |        \x1b[32m %.1f\x1b[37m\n", mediaFinal);
      printf("-----------------------------------------------\n");
      printf("             \x1b[32m Aprovado pela prova final \x1b[37m\n");
      printf("-----------------------------------------------\n");
    }
  }
  else {
    //Caso a média seja maior que 7, imprime a média e a situação de aprovado
    printf("       Média        |         \x1b[32m%.1f\x1b[37m\n", media);
    printf("-----------------------------------------------\n");
    printf("       Situação     |    \x1b[32m Aprovado\x1b[37m\n");
    printf("-----------------------------------------------\n");
  }
  printf(" Número de faltas   |        %d\n", faltas);
  printf("-----------------------------------------------\n");
  //Condição que verifica a quantidade de faltas de acordo com a carga horária da matéria
  if (faltas < ch*0.25){
    //Se a quantidade de faltas seja menor que a quantidade de faltas permitidas, imprime a situação de que cumpriu a carga horária exigida pela matéria
    printf("     Situação       |   \x1b[32mCumpriu carga horária\x1b[37m\n");
    printf("-----------------------------------------------\n");
  }
  else {
    //Caso a quantidade de faltas seja maior que a quantidade de faltas permitidas, imprime a situação de reprovado por falta
    printf("     Situação       |     \x1b[31mReprovado por falta\x1b[37m\n");
    printf("-----------------------------------------------\n");
  }
  
  return 0;
}

/*
Referências
http://www.uesc.br/prograd/arquivos/legislacao_graduacao.pdf
*/