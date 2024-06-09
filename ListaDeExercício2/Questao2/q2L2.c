#include <stdio.h>
#include <stdlib.h>

/**
*@brief Função que transforma celsius em fahrenheit
*@param celsius: armazena valor de celsius
*@retval celsius: retorna valor de celsius 
*/
double celsiusF(double celsius){
  return celsius = (celsius * 9/5) + 32;
}

/**
*@brief Função que transforma fahrenheit em celsius
*@param fahrenheit: armazena valor de fahrenheit
*@retval fahrenheit: retorna valor de fahrenheit
*/
double fahrenheitC(double fahrenheit) {
  return (fahrenheit - 32.0) * 5.0 / 9.0;
}

/**
*@brief Função principal que imprime os valores já convertidos
*@param argc: quantidade de argumentos
*@param argv: argumentos
*@retval int: retorna 0 se o programa rodar corretamente
*/
int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf(" %s <temperatura> <C/F>\n", argv[0]);
    return 1;
  }
  double temperatura = atof(argv[1]);
  char unidade = argv[2][0];

  if (unidade == 'C' || unidade == 'c') {
    double fahrenheit = celsiusParaFahrenheit(temperatura);
    printf("%.2f graus Celsius é igual a %.2f graus Fahrenheit.\n", temperatura, fahrenheit);
  } else if (unidade == 'F' || unidade == 'f') {
    double celsius = fahrenheitParaCelsius(temperatura);
    printf("%.2f graus Fahrenheit é igual a %.2f graus Celsius.\n", temperatura, celsius);
  } else {
    printf("Unidade inválida. Use 'C' para Celsius ou 'F' para Fahrenheit.\n");
    return 1;
  }

  return 0;
}
