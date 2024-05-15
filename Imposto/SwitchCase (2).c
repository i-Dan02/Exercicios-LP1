//Igor Daniel Rocha de Jesus
//Matricula: 202410511

#include <stdio.h>

int main(void) {
  int salBruto;
  float salLiquido1;
  float imposto;
  int valor;
  float Impostofx2, Impostofx3, Impostofx4, Impostofx5;


  printf("Digite o salário bruto: ");
  scanf("%d", &salBruto);

  switch (salBruto){
    case 0 ... 1903 + (98/100):
      printf("TABELA DE IMPOSTO DE RENDA\n");
      printf("_____________________________________________________________\n");
      printf("| Alíquota |  Faixa salarial              |      Imposto     |\n");
      printf("|__________|______________________________|__________________|\n");
      printf("|    0,00  |      Até R$ 1.903,98         |       \x1b[31mIsento\x1b[37m     |\n");
      printf("|__________|______________________________|__________________|\n\n");
    break;

    case 1904 ... 2826 + (65/100):
        Impostofx2 = salBruto * 0.075;
        salLiquido1 = salBruto - Impostofx2;
      printf("TABELA DE IMPOSTO DE RENDA\n");
          printf("_____________________________________________________________\n");
          printf("| Alíquota |  Faixa salarial              |      Imposto     |\n");
          printf("|__________|______________________________|__________________|\n");
          printf("|    0,00  |      Até R$ 1.903,98         |       \x1b[31mIsento\x1b[37m     |\n");
          printf("|__________|______________________________|__________________|\n");
          printf("|   7,5    |  R$1903.99 < x > R$ 2826.65  |     \x1b[31mR$ %.2f\x1b[37m    |\n", Impostofx2);
          printf("|__________|______________________________|__________________|\n\n");
      
    break;

    case 2827 ... 3751 +(5/100):
        Impostofx2 = salBruto * 0.075;
        Impostofx3 = salBruto * 0.15;
        salLiquido1 = salBruto - Impostofx3;
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

    break;

    case 3752 ... 4664 + (68/100):
        Impostofx2 = salBruto * 0.075;
        Impostofx3 = salBruto * 0.15;
        Impostofx4 = salBruto * 0.225;
        salLiquido1 = salBruto - Impostofx4;
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
      printf("|   22,5   |  R$3751.06 < x > R$ 4664.68  |      \x1b[31mR$ %.2f\x1b[37m   |\n", Impostofx4);
      printf("___________|______________________________|__________________|\n\n");
      
    break;

    case 4665 ... 999999999:
        Impostofx2 = salBruto * 0.075;
        Impostofx3 = salBruto * 0.15;
        Impostofx4 = salBruto * 0.225;
        Impostofx5 = salBruto * 0.275;
        salLiquido1 = salBruto - Impostofx5;
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
      printf("|   27,5%%  |    Maior que R$4664.69       |      \x1b[31mR$ %.2f\x1b[37m   |\n", Impostofx5);
      printf("___________|______________________________|__________________|\n\n");
    break;
    default:
      printf("Valor inválido");
        }

  //Declaração das variáveis
  float fgts = 0.08, transporte = 0.06, valeCoxinha = 264.00;
  float saude = 0;
  float valeTransporte = 0, fgtsDesconto = 0;
  float coelba = 0;
  float salLiquido2 = 0;

  //Imprime mensagem pedindo para inserir o valor do plano de saúde
  printf("Valor do plano de saude: R$  ");
  //Lê valor do plano de saúde
  scanf("%f", &saude);


  float inss = 0;

  switch (salBruto){
    case 0 ... 1412:
      inss = salBruto *0.075;
    break;


    case 1413 ... 2666 + (68/100):
      inss = salBruto * 0.09;
      break;

    case 2667 ... 4000 + (3/100):
      inss = salBruto * 0.12;
      break;

    case 4001 ... 7786 + (2/100):
      inss = salBruto * 0.14;
      break;

    case 7787 ... 999999999:
      inss = 908.65;
      break;
  }
    printf("\nValor do inss é: %.2f\n", inss);

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

  printf("\nO artigo 153 da CLT prevê que a cada período de 12 meses de contrato de trabalho, o colaborador contratado pela CLT tenha direito a férias, que deve ser pago pela empresa o adicional de ⅓ da média anual do salário bruto do colaborador.\n\n\n");

  printf("Digite a média do salário anual do colaborador: ");
  scanf("%f", &medSalAnual);

  fracao = medSalAnual * 1/3;
  descFerias = medSalAnual + fracao;

  //Calcula o valor do INSS que será descontado do salário de férias


  switch (salBruto){
    case 0 ... 1412:
      inssf = descFerias *0.075;
    break;
    

    case 1413 ... 2666 + (68/100):
      inssf = descFerias * 0.09;
      break;

    case 2667 ... 4000 + (3/100):
      inssf = descFerias * 0.12;
      break;
      
    case 4001 ... 7786 + (2/100):
      inssf = descFerias * 0.14;
      break;
    
    case 7787 ... 999999999:
      inssf = 908.65;
      break;
  }
    

    //Calcula valor do irpf que vai ser descontado do salário de férias


  switch (salBruto){
    case 0 ... 1902 + (98/100):
      printf("Sem parcela de IRPF a deduzir.\n");
      break;
    

    case 1903 ... 2826 + (68/100):
      irpff = (descFerias * 0.075) - 142.80;
      break;

      
    case 2827 ... 3751 + (3/100):
      irpff = (descFerias * 0.15) - 354.80;
      break;
    

    case 3752 ... 4664 + (2/100):
      irpff = (descFerias * 0.225) - 636.13;
      break;
    

    case 4665 ... 999999999:
      irpff = (descFerias * 0.275) - 869.36;
      break;
  }
    //Calcula o valor do salário de férias
    ferias = descFerias - inssf - irpff;

    //Calculo do décimo terceiro
    printf("Para o cálculo do décimo terceiro, é necessário saber o número de meses trabalhados.\n");
    printf("Digite o número de meses trabalhados: ");
    scanf( "%f", &meses);

    decimoTerceiro = (medSalAnual / 12) * meses;

    //Calcula o valor do FGTS MULTA
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
  printf("A seguir, seram mostrados alguns deveres do \x1b[32mempregador\x1b[37m:\n\n ");

  printf("*Assinar a carteira de trabalho do empregado\n");

  printf("*Realizar o pagamento do salário em dia\n");

  printf("*Oferecer descanso semanal remunerado e intervalo\n");

  printf(" -É preciso no mínimo 11 horas consecutivas de descanso entre uma jornada de trabalho e outra;\n -É um dever do contratante oferecer ao menos uma folga por mês no dia de domingo, sendo necessário realizar uma escala de revezamento entre os funcionários;\n -É obrigatório que os empregados tenham no mínimo 1 hora ou no máximo 2 horas de intervalo (para jornadas que tenham duração de mais de 6 horas diárias\n -É um dever fornecer 15 minutos de intervalo para funcionários com jornadas de trabalho que duram entre 4 e 6 horas.\n");

  printf("*Fornecer os benefícios trabalhistas\n");

  printf(" -Décimo terceiro salário;\n -Férias remuneradas com duração de 30 dias: devem ser ofertadas quando o empregado completa um ano de contrato assinado, podendo ser fracionadas ou vendidas;\n -Fundo de Garantia de Tempo de Serviço (FGTS): percentual de 8% do total da remuneração, tendo que ser depositado mensalmente na conta do contratado;\n -Vale-transporte;\n -Contribuição do INSS;\n -Imposto de Renda Retido na Fonte (IRRF)\n\n\n\n");

  printf("Agora que vimos os principais deveres do \x1b[32mempregador\x1b[37m, vamos apresentar quais são os seus direitos: \n\n");

  printf(" -Cobrar pontualidade e assiduidade dos funcionários;\n -Exigir o cumprimento das tarefas estabelecidas para a função/cargo do empregado;\n -Exigir o cumprimento da carga horária acordada;\n -Demandar o sigilo de todas as informações da empresa;\n -Determinar um código de conduta a ser seguido, desde que não ultrapasse os limites da legislação;\n -Criar um código de vestimenta dos funcionários, desde que eles sejam informados a respeito de forma clara e bem definida;\n -Aplicar punições no caso de descumprimento de regras ou normas: é preciso serem imediatas, ou seja, logo após o acontecimento da infração.");

  printf("A seguir, vamos aos elementos que incidem na folha de pagamento do \x1b[32mempregador\x1b[37m: \n\n");

  float feriasEmpregador = 0.1111, decimoTerceiroEmpregador = 0.833, fgtsEmpregador = 0.08, feriasEmp = 0, decimoTerceiroEmp = 0, fgtsEmp = 0, salEmp = 0, fracaoFerias = 0;
  int salEmpregador;

  printf("Digite o faturamento mensal: ");
  scanf("%d", &salEmpregador);

  switch (salEmpregador){
    case 0:
    printf("\x1b[31Valor inválido!!!\x1b[37m\n");
      break;
  
    case 1 ... 999999999:
      feriasEmp = salEmpregador * feriasEmpregador;
      decimoTerceiroEmp = (salEmpregador / 12) * decimoTerceiroEmpregador;
      fgtsEmp = salEmpregador * fgtsEmpregador;
      break;
  }

  fracaoFerias = salEmpregador * 1/3;


  salEmp = salEmpregador + feriasEmp + decimoTerceiroEmp + fgtsEmp;


  printf("A seguir, tabela de valores/descontos que incidem na folha de pagamento do empregador: \n");

  printf("______________________________________________________________\n");
  printf("|      TABELA DE VALORES/DESCONTOS EMPREGADOR                |\n");
  printf("|____________________________________________________________|\n");
  printf("|   SALÁRIO BRUTO    |               R$ %d               |\n", salEmpregador);
  printf("|____________________|_______________________________________|\n");
  printf("|     ELEMENTOS      |             CREDITO/DEBITO            |\n");
  printf("|____________________|_______________________________________|\n");
  printf("|     FGTS           |       \x1b[32mR$ %.2f\x1b[37m        |\n", fgtsEmp);
  printf("|____________________|_______________________________________|\n");
  printf("|     FERIAS         |       \x1b[32m R$ %.2f\x1b[37m        |\n", feriasEmp);
  printf("|____________________|_______________________________________|\n");
  printf("|     DEC. TERCEIRO  |       \x1b[32mR$ %.2f\x1b[37m        |\n", decimoTerceiroEmp);
  printf("|____________________|_______________________________________|\n");
  printf("|  FRACÃO FERIAS     |       \x1b[32mR$ %.2f\x1b[37m        |\n", fracaoFerias);
  printf("|____________________|_______________________________________|\n");
  printf("|   SALARIO LIQUIDO  |       \x1b[32mR$ %.2f\x1b[37m        |\n", salEmp);
  printf("|____________________|_______________________________________|\n");

    return 0;
  }