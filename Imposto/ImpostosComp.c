// Aluno: Igor Daniel Rocha de Jesus
// Matricula: 202410511


// Biblioteca
#include <stdio.h>


int main(void) {

  //Declara as variáveis 
    float salBruto;
    float salLiquido1;
    float aliq2 = 0.075, aliq3 = 0.15, aliq4 = 0.225, aliq5 = 0.275;
    float Impostofx2, Impostofx3, Impostofx4, Impostofx5;;


  //Pede o valor do salário bruto
    printf("Digite o salário bruto: ");

  //Entrada do valor do salário bruto
    scanf("%f", &salBruto);

  //Verifica se o salário bruto chega a pagar imposto de renda 
    if (salBruto <= 1903.98 ){
     //Se for inferior ao valor mínimo, não paga imposto de renda

      //TABELA DE IMPOSTO DE RENDA
      printf("TABELA DE IMPOSTO DE RENDA\n");
      printf("_____________________________________________________________\n");
      printf("| Alíquota |  Faixa salarial              |      Imposto     |\n");
      printf("|__________|______________________________|__________________|\n");
      printf("|    0,00  |      Até R$ 1.903,98         |       \x1b[31mIsento\x1b[37m     |\n");
      printf("|__________|______________________________|__________________|\n\n");

    }

  //Verifica se o salário bruto se aplica a essa taxa
    if (salBruto >= 1903.99  && salBruto <= 2826.65){ 
  //Se sim, calcula o imposto de renda de acordo com a alíquota e o salário líquido    

      Impostofx2 = (salBruto * aliq2) - 142.80;

      salLiquido1 = salBruto - ( Impostofx2 ) ;


        //TABELA DE IMPOSTO DE RENDA      
        printf("TABELA DE IMPOSTO DE RENDA\n");
        printf("_____________________________________________________________\n");
        printf("| Alíquota |  Faixa salarial              |      Imposto     |\n");
        printf("|__________|______________________________|__________________|\n");
        printf("|    0,00  |      Até R$ 1.903,98         |       \x1b[31mIsento\x1b[37m     |\n");
        printf("|__________|______________________________|__________________|\n");
        printf("|   7,5    |  R$1903.99 < x > R$ 2826.65  |     \x1b[31mR$ %.2f\x1b[37m    |\n", Impostofx2);
        printf("|__________|______________________________|__________________|\n\n");
    }


  //Verifica se o salário bruto se aplica a essa taxa
    if (salBruto >= 2826.66 && salBruto <= 3751.05){
  //Se sim, calcula o imposto de renda de acordo com a alíquota e o salário líquido   
      Impostofx2 = (salBruto - 1903 ) * aliq2;

      Impostofx3 = ((salBruto - 1903 ) * aliq2 + ((salBruto ) * aliq3) - 354.80);

      salLiquido1 = salBruto - ( Impostofx3 );

      //TABELA DE IMPOSTO DE RENDA
      printf("TABELA DE IMPOSTO DE RENDA\n");
      printf("_____________________________________________________________\n");
      printf("| Alíquota |  Faixa salarial              |      Imposto     |\n");
      printf("|__________|______________________________|__________________|\n");
      printf("|    0,00  |      Até R$ 1.903,98         |       \x1b[31mIsento\x1b[37m     |\n");
      printf("|__________|______________________________|__________________|\n");
      printf("|   7,5    |  R$1903.99 < x > R$ 2826.65  |     \x1b[31mR$ %.2f\x1b[37m    |\n", Impostofx2);
      printf("___________|______________________________|__________________|\n");
      printf("|   15,0   |  R$2826.66 < x > R$ 3751.05  |     \x1b[31mR$ %.2f\x1b[37m    |\n", Impostofx3);
      printf("___________|______________________________|__________________|\n\n");

    }


  //Verifica se o salário bruto se aplica a essa taxa  
    if (salBruto >= 3751.05 && salBruto <= 4664.68){
  //Se sim, calcula o imposto de renda de acordo com a alíquota e o salário líquido 

      Impostofx2 = (salBruto - 1903 ) * aliq2;

      Impostofx3 = ((salBruto - 1903.99) * aliq2) + ((3751.05 - 2826.66) * aliq3);

      Impostofx4 = ((salBruto - 1903.99) * aliq2) + ((3751.05 - 2826.65) * aliq3) + ((salBruto - 3751.05) * aliq4);

      salLiquido1 = salBruto - ( Impostofx4 );

      //TABELA DE IMPOSTO DE RENDA
      printf("TABELA DE IMPOSTO DE RENDA\n");
      printf("_____________________________________________________________\n");
      printf("| Alíquota |  Faixa salarial              |      Imposto     |\n");
      printf("|__________|______________________________|__________________|\n");
      printf("|    0,00  |      Até R$ 1.903,98         |       \x1b[31mIsento\x1b[37m     |\n");
      printf("|__________|______________________________|__________________|\n");
      printf("|   7,5    |  R$1903.99 < x > R$ 2826.65  |     \x1b[31mR$ %.2f\x1b[37m    |\n", Impostofx2);
      printf("___________|______________________________|__________________|\n");
      printf("|   15,0   |  R$2826.66 < x > R$ 3751.05  |     \x1b[31mR$ %.2f\x1b[37m    |\n", Impostofx3);
      printf("___________|______________________________|__________________|\n");
      printf("|   22,5   |  R$3751.05 < x > R$ 4664.68  |      \x1b[31mR$ %.2f\x1b[37m   |\n", Impostofx4);
      printf("___________|______________________________|__________________|\n\n");

    }

  //Verifica se o salário bruto se aplica a essa taxa  
    if (salBruto >= 4664.68){
  //Se sim, calcula o imposto de renda de acordo com a alíquota e o salário líquido    

      Impostofx2 = (salBruto - 1903 ) * aliq2;

      Impostofx3 = ((salBruto - 1903.99) * aliq2) + ((3751.05 - 2826.66) * aliq3);

      Impostofx4 = ((salBruto - 1903.99) * aliq2) + ((3751.05 - 2826.65) * aliq3) + ((salBruto - 3751.05) * aliq4);

      Impostofx5 =  (((salBruto - 1903.99) * aliq2) + ((3751.05 - 2826.65) * aliq3) + ((salBruto - 3751.05) * aliq4) + ((salBruto - 4664.68) * aliq5));

    salLiquido1 = salBruto - ( Impostofx5 );

      //TABELA DE IMPOSTO DE RENDA
          printf("TABELA DE IMPOSTO DE RENDA\n");
          printf("_____________________________________________________________\n");
          printf("| Alíquota |  Faixa salarial              |      Imposto     |\n");
          printf("|__________|______________________________|__________________|\n");
          printf("|    0,00  |      Até R$ 1.903,98         |       \x1b[31mIsento\x1b[37m     |\n");
          printf("|__________|______________________________|__________________|\n");
          printf("|   7,5    |  R$1903.99 < x > R$ 2826.65  |     \x1b[31mR$ %.2f\x1b[37m    |\n", Impostofx2);
          printf("___________|______________________________|__________________|\n");
          printf("|   15,0   |  R$2826.66 < x > R$ 3751.05  |     \x1b[31mR$ %.2f\x1b[37m    |\n", Impostofx3);
          printf("___________|______________________________|__________________|\n");
          printf("|   22,5   |  R$3751.05 < x > R$ 4664.68  |      \x1b[31mR$ %.2f\x1b[37m   |\n", Impostofx4);
          printf("___________|______________________________|__________________|\n");
          printf("|   27,5%%  |    Maior que R$4664.68       |      \x1b[31mR$ %.2f\x1b[37m   |\n", Impostofx5);
          printf("___________|______________________________|__________________|\n\n");

        }


      //Declaração das variáveis
      float fgts = 0.08, transporte = 0.06, valeCoxinha = 264.00;
      float saude = 0;
      float valeTransporte = 0, fgtsDesconto = 0;
      float coelba = 0;
      float imposto = 0;
      float salLiquido2 = 0;

      //Imprime mensagem pedindo para inserir o valor do plano de saúde
      printf("Valor do plano de saude: R$  ");
      //Lê valor do plano de saúde
      scanf("%f", &saude);


      float inss = 0;

      //Calcula o valor do INSS
      if(salBruto <= 1302.00 ){
        printf("Sem parcela de INSS a deduzir.\n");
      }

      if(salBruto >= 1302.01 && salBruto <= 2571.29){
        inss = salBruto * 0.09;
      }

      if (salBruto >= 2571.30 && salBruto <= 3856.94){
        inss = salBruto * 0.12;
      }

      if (salBruto >= 3856.95 && salBruto <= 7507.49){
        inss = salBruto * 0.14;
      }

      if (salBruto > 7507.49){
        inss = 856.46;
      }
      //Imprime mensagem pedindo para inserir valor da conta de luz(coelba)
      printf("Valor da conta de luz: R$ ");
      //Lê valor da conta de luz
      scanf("%f", &coelba);

      //Imprime mensagem pedindo para inserir valor do vale transporte
      printf("Valor do vale transporte: R$ ");
      //Lê valor do vale transporte
      scanf("%f", &valeTransporte);


      //Calcula valor do FGTS
      fgtsDesconto = salLiquido1 * fgts;


      //Calcula o salário líquido
      salLiquido2 = (salLiquido1 - saude - valeTransporte + valeCoxinha + fgtsDesconto - inss - coelba) ;

      //Calcula total do IRPF
      imposto = salBruto - salLiquido1;

  
    float ferias = 0, decimoTerceiro = 0, medSalAnual = 0, fracao = 0, descFerias = 0, inssf = 0, irpff = 0, fgtsm = 0, fgtsDesconto2 = 0, meses = 0;

    printf("O artigo 153 da CLT prevê que a cada período de 12 meses de contrato de trabalho, o colaborador contratado pela CLT tenha direito a férias, que deve ser pago pela empresa o adicional de ⅓ da média anual do salário bruto do colaborador.\n\n\n");

    printf("Digite a média do salário anual do colaborador: ");
    scanf("%f", &medSalAnual);

    fracao = medSalAnual * 1/3;
    descFerias = medSalAnual + fracao;

    //Calcula o valor do INSS que será descontado do salário de férias

    if(descFerias <= 1302.00 ){
      printf("Sem parcela de INSS a deduzir.\n");
    }

    if(descFerias >= 1302.01 && descFerias <= 2571.29){
      inssf = descFerias * 0.09;
    }

    if (descFerias >= 2571.30 && descFerias <= 3856.94){
      inssf = descFerias * 0.12;
    }

    if (descFerias >= 3856.95 && descFerias <= 7507.49){
      inssf =descFerias * 0.14;
    }

    if (descFerias > 7507.49){
      inssf = 856.46;
    }

    //Calcula valor do irpf que vai ser descontado do salário de férias

    if(descFerias <= 1903.98 ){
      printf("Sem parcela de IRPF a deduzir.\n");
    }

    if(descFerias >= 1903.99 && descFerias <= 2826.65){
      irpff = (descFerias * 0.075) - 142.80;
    }

    if(descFerias >= 2826.66 && descFerias <= 3751.05){
      irpff = (descFerias * 0.15) - 354.80;;
    }

    if(descFerias >= 3751.06 && descFerias <= 4664.68){
      irpff = (descFerias * 0.225) - 636.13;;
    }

    if(descFerias > 4664.68){
      irpff = (descFerias * 0.275) - 869.36;;
    }

    //Calcula o valor do salário de férias
    ferias = descFerias - inssf - irpff;

    //Calculo do décimo terceiro
    printf("Para o cálculo do décimo terceiro, é necessário saber o número de meses trabalhados.\n");
    printf("Digite o número de meses trabalhados: ");
    scanf( "%f", &meses);

    decimoTerceiro = (medSalAnual / 12) * meses;

    //FGTS - PROVISÃO DE MULTA RECISÓRIA
    printf("Se um dia você desligar seu funcionário, terá de pagar uma multa sobre o total recolhido para o FGTS. Por isso, sua empresa paga ainda 4%% sobre o salário todo mês, a título de provisão caso uma demissão aconteça.\n\n");

    fgtsDesconto2 = salBruto * 0.04;

  
  //Imprime tabela de valores/descontos
  printf("|_____________________________________________________________|\n");
  printf("|TABELA DE VALORES/DESCONTOS QUE INCIDEM NA FOLHA DE PAGAMENTO|\n");
  printf("|_____________________________________________________________|\n");
  printf("| Salário Inicial    |               R$ %.2f               |\n", salBruto);
  printf("|____________________|________________________________________|\n");
  printf("|     ELEMENTOS      |             CREDITO/DEBITO             |\n");
  printf("|____________________|________________________________________|\n");
  printf("|     COELBA         |                \x1b[31m%.2f\x1b[37m                  |\n", coelba);
  printf("|____________________|________________________________________|\n");
  printf("|        FGTS        |                \x1b[32m%.2f\x1b[37m                  |\n", fgtsDesconto);
  printf("|____________________|________________________________________|\n");
  printf("|        INSS        |                \x1b[31m%.2f\x1b[37m                  |\n", inss);
  printf("|____________________|________________________________________|\n");
  printf("|       SAUDE        |                \x1b[31m%.2f\x1b[37m                  |\n", saude);
  printf("|____________________|________________________________________|\n");
  printf("|  VALE TRANSPORTE   |                \x1b[31m%.2f\x1b[37m                  |\n", valeTransporte);
  printf("|____________________|________________________________________|\n");
  printf("|   VALE COXINHA     |                \x1b[32m%.2f\x1b[37m                  |\n", valeCoxinha);
  printf("|____________________|________________________________________|\n");
  printf("|  IMPOSTO DE RENDA  |                \x1b[31m%.2f\x1b[37m                  |\n", imposto);
  printf("|____________________|________________________________________|\n");
  printf("|   SALARIO LIQUIDO  |                %.2f                 |\n", salLiquido2);
  printf("|_____________________________________________________________|\n");
  printf("|                         TABELA                              |\n");
  printf("|_____________________________________________________________|\n");
  printf("|MÉDIA SALARIAL ANUAL|                %.2f                 |\n", medSalAnual);
  printf("|____________________|________________________________________|\n");
  printf("| FRAÇÃO DE FÉRIAS   |                \x1b[36m%.2f\x1b[37m                 |\n", ferias);
  printf("|____________________|________________________________________|\n");
  printf("|  DEC. TERCEIRO     |                \x1b[32m%.2f\x1b[37m                  |\n", decimoTerceiro);
  printf("|____________________|________________________________________|\n");
  printf("|   FGTS MULTA       |                \x1b[32m%.2f\x1b[37m                  |\n", fgtsDesconto2);
  printf("|____________________|________________________________________|\n\n\n");





  //Parte 3
  printf("A seguir, seram mostrados alguns deveres do \x1b[32mempregador\x1b[37m.\n\n ");
  
  printf("*Assinar a carteira de trabalho do empregado\n");
  
  printf("*Realizar o pagamento do salário em dia\n");
  
  printf("*Oferecer descanso semanal remunerado e intervalo\n");
  
  printf(" -É preciso no mínimo 11 horas consecutivas de descanso entre uma jornada de trabalho e outra;\n -É um dever do contratante oferecer ao menos uma folga por mês no dia de domingo, sendo necessário realizar uma escala de revezamento entre os funcionários;\n -É obrigatório que os empregados tenham no mínimo 1 hora ou no máximo 2 horas de intervalo (para jornadas que tenham duração de mais de 6 horas diárias\n -É um dever fornecer 15 minutos de intervalo para funcionários com jornadas de trabalho que duram entre 4 e 6 horas.\n");
  
  printf("*Fornecer os benefícios trabalhistas\n");
  
  printf(" -Décimo terceiro salário;\n -Férias remuneradas com duração de 30 dias: devem ser ofertadas quando o empregado completa um ano de contrato assinado, podendo ser fracionadas ou vendidas;\n -Fundo de Garantia de Tempo de Serviço (FGTS): percentual de 8% do total da remuneração, tendo que ser depositado mensalmente na conta do contratado;\n -Vale-transporte;\n -Contribuição do INSS;\n -Imposto de Renda Retido na Fonte (IRRF)\n\n\n\n");
  
  printf("Agora que vimos os principais deveres do \x1b[32mempregador\x1b[37m, vamos apresentar quais são os seus direitos: \n\n");
  
  printf(" -Cobrar pontualidade e assiduidade dos funcionários;\n -Exigir o cumprimento das tarefas estabelecidas para a função/cargo do empregado;\n -Exigir o cumprimento da carga horária acordada;\n -Demandar o sigilo de todas as informações da empresa;\n -Determinar um código de conduta a ser seguido, desde que não ultrapasse os limites da legislação;\n -Criar um código de vestimenta dos funcionários, desde que eles sejam informados a respeito de forma clara e bem definida;\n -Aplicar punições no caso de descumprimento de regras ou normas: é preciso serem imediatas, ou seja, logo após o acontecimento da infração.");

  printf("A seguir, vamos aos elementos que incidem na folha de pagamento do \x1b[32mempregador\x1b[37m: \n\n");

  float feriasEmpregador = 0.1111, decimoTerceiroEmpregador = 0.833, fgtsEmpregador = 0.08, salEmpregador = 0, feriasEmp = 0, decimoTerceiroEmp = 0, fgtsEmp = 0;

  printf("Digite o salário do empregador: ");
  scanf("%f", &salEmpregador);

  feriasEmp = salEmpregador * feriasEmpregador;

  decimoTerceiroEmpregador = (salEmpregador / 12) * decimoTerceiroEmp;

  fgtsEmpregador = salEmpregador * fgtsEmpregador;

  printf("A seguir, tabela de valores/descontos que incidem na folha de pagamento do empregador: \n");

  printf("______________________________________________________________\n");
  printf("|                  TABELA DE VALORES/DESCONTOS               |\n");
  printf("|____________________________________________________________|\n");
  printf("| Salário Inicial    |               R$ %.2f               |\n", salEmpregador);
  printf("|____________________|_______________________________________|\n");
  printf("|     ELEMENTOS      |             CREDITO/DEBITO            |\n");
  printf("|____________________|_______________________________________|\n");
  printf("|     FGTS           |         \x1b[32m%.2f\x1b[37m        |\n", fgtsEmpregador);
  printf("|____________________|_______________________________________|\n");
  printf("|     FERIAS         |         \x1b[32m%.2f\x1b[37m        |\n", feriasEmpregador);
  printf("|____________________|_______________________________________|\n");
  printf("|     DEC. TERCEIRO  |         \x1b[32m%.2f\x1b[37m        |\n", decimoTerceiroEmpregador);
  printf("|____________________|_______________________________________|\n\n\n");

  printf("FIM!!");

  
  
  
    return 0;
  }

