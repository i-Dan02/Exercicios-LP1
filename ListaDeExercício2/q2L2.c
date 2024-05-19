/*/
Q2. Crie um programa qual entre com argumentos e desenvolva funções que:
2.1 Transforme Celsius e Farenheit a depender da escolha;
/*/
#include <stdio.h>
#include <stdio.h>


double celsiusF(double celsius){
  return celsius = (celsius * 9/5) + 32;
}

double fahrenheitC(double fahrenheit) {
  return (fahrenheit - 32.0) * 5.0 / 9.0;
}

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