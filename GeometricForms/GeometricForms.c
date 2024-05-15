/*/
Igor Daniel Rocha de Jesus - 202410511
Student of Science Computer - UESC
  /*/
#include <stdio.h>
#include <math.h>

int main() {

  //Possa escolher a figura geométrica plana qual se deseja calcular (segmento de reta, circulo, triangulo, quadrado, retângulo, trapézio, losango, outros;
  
  int figura;
  printf("Escolha a figura geométrica plana que deseja calcular: \n");
  printf("1 - Segmento de reta\n2 - Círculo\n3 - Triângulo\n4 - Quadrado\n5 - Retângulo\n6 - Trapézio\n7 - Losango\n8 - Paralelogramo\n");
  printf("Digite aqui: ");
  scanf("%d", &figura);

  while (figura < 1 || figura > 8){
    printf("Não está entre as opções, digite novamente: ");
    scanf("%d", &figura);
  }

  if (figura == 1){
    printf("\nVocê escolheu o segmento de reta.\n");
    int cordx1, cordx2, cordy1, cordy2;
    printf("Digite as coordenadas do ponto inicial (x, y): ");
    scanf("%d %d", &cordx1, &cordy1);
    printf("Digite as coordenadas do ponto final (x, y): ");
    scanf(" %d %d", &cordx2, &cordy2);

    double distancia = sqrt(pow(cordx2 - cordx1, 2) + pow(cordy2 - cordy1, 2));

    printf("A distância entre os pontos A(%d, %d) e B(%d, %d) é: %.2f\n", cordx1, cordy1, cordx2, cordy2, distancia);
    
  }

  if (figura == 2){
    printf("\nVocê escolheu o círculo.\n");
    printf("Para cálculos da circunferência, usaremos uma aproximação para pi ( 3,14 ).\n");
    double pi = 3.14;
    float raio;
    float diametro;
    printf("Digite o diâmetro do círculo: ");
    scanf("%f", &diametro);
    raio = diametro / 2;
    float perimetro = 2 * pi * raio;
    float area = pi * pow(raio, 2);

    float x, y;
    printf("\nO centróide é exatamente o centro do círculo. O centróide é o ponto médio entre o centro e o vértice.\n");
    double centroidex = diametro / 2;
    double centroidey = diametro / 2;
    printf("A seguir, medidas do círculo: \n- Diâmetro: %.2f\n- Raio: %.2f\n- Perímetro: %.2f\n- Área: %.2f\n-Centróide do círculo é: (%.2f, %.2f).\n", diametro, raio, perimetro, area, centroidex, centroidey);
  }

  if (figura == 3){
  printf("\nVocê escolheu o triângulo.\n");
  printf("Qual dos triângulos abaixo você deseja calcular?\n");
  printf("1 - Equilátero\n2 - Isósceles\n3 - Escaleno\n");
  int triangulo;
  scanf(" %d", &triangulo);
    while (triangulo < 1 || triangulo > 3){
      printf("Não está entre as opções, digite novamente: ");
      scanf("%d", &triangulo);
    }

    if (triangulo == 1){
    printf("Você escolheu o triângulo equilátero.\n");
    printf("Dê o valor do lado do triângulo: ");
    float lado;
    scanf("%f", &lado);
    while (lado <= 0){
      printf("Não pode ser negativo ou zero, digite novamente: ");
      scanf("%f", &lado);
    }
    float perimetro = 3 * lado;
    float area = (pow(lado, 2) * sqrt(3)) / 4;
    float altura = (lado * sqrt(3)) / 2;
    float centroide = lado / 3;
    printf("A seguir, medidas do triângulo equilátero: \n- Lado: %.2f\n- Perímetro: %.2f\n- Área: %.2f\n- Altura: %.2f\n- Centróide: %.2f\n", lado, perimetro, area, altura, centroide);
    }

    if (triangulo == 2){
    printf("Você escolheu o triângulo isósceles.\n");
    printf("Dê o valor da base do triângulo: ");
    float base;
    scanf("%f", &base);
    printf("Dê o valor do lado do triângulo: ");
    float lado;
    scanf("%f", &lado);
      while ( lado <= base){
        printf("O lado do triângulo não pode ser menor que a base, digite novamente: ");
        scanf("%f", &lado);
      }
      while(base <= 0 || lado <= 0){
        printf("Não pode ser negativo ou zero, digite novamente: ");
        scanf("%f %f", &base, &lado);
      }
    float calch = base / 2;
    float altura = sqrt(pow(lado, 2) - pow(calch, 2));
    float perimetro = (2 * lado) + base;
    float area = (base * altura) / 2;
    float centroide = altura / 3;
    printf("A seguir, medidas do triângulo isósceles: \n- Base: %.2f\n- Lado: %.2f\n- Altura: %.2f\n- Perímetro: %.2f\n- Área: %.2f\n- Centróide: %.2f\n", base, lado, altura, perimetro, area, centroide);
    }

    if (triangulo == 3){
    printf("Você escolheu o triângulo escaleno.\n");
    printf("Digite o valor dos 3 lados do triângulo, sabendo que o lado A é o valor da base do triângulo: ");
    float ladoA, ladoB, ladoC;
    scanf("%f %f %f", &ladoA, &ladoB, &ladoC);
      while(ladoA <= 0 || ladoB <= 0 || ladoC <= 0){
        printf("Não pode ser negativo ou zero, digite novamente: ");
        scanf("%f %f %f", &ladoA, &ladoB, &ladoC);
      }
    float perimetro = ladoA + ladoB + ladoC;
    float semiperimetro = perimetro / 2;
    float altura = (2/ladoA) * sqrt(semiperimetro*(semiperimetro - ladoA)*(semiperimetro - ladoB)*(semiperimetro - ladoC));
    float area = (ladoA * altura) / 2;
    float centroidex, centroidey;
    centroidex = (ladoA + ladoB) / 3;
    centroidey = altura / 3;
    printf("A seguir, medidas do triângulo escaleno: \n- Lado A(base): %2.f\n- Lado B: %2.f\n- Lado C: %2.f\n- Perímetro: %.2f\n- Semiperímetro: %.2f\n-Altura: %2.f\n- Área: %.2f\n- Centróide: (X=%.2f, Y=%.2f)\n", ladoA, ladoB, ladoC, perimetro, semiperimetro, altura, area, centroidex, centroidey);
    }
}

  if (figura == 4){
  printf("\nVocê escolheu o quadrado.\n");
  printf("Digite o valor do lado do quadrado: ");
  float lado;
  scanf("%f", &lado);
  while (lado <= 0){
    printf("Não pode ser negativo ou zero, digite novamente: ");
    scanf("%f", &lado);
  }
  float perimetro = 4 * lado;
  float area = pow(lado, 2);
  float diagonal = lado * sqrt(2);
  printf("A seguir, medidas do quadrado: \n- Lado: %.2f\n- Perímetro: %.2f\n- Área: %.2f\n- Diagonal: %.2f\n", lado, perimetro, area, diagonal);
  }

  if (figura == 5){
  printf("\nVocê escolheu o retângulo.\n");
  printf("Digite o valor da base do retângulo: ");
  float base;
  scanf("%f", &base);
  printf("Digite o valor da altura do retângulo: ");
  float altura;
  scanf("%f", &altura);
  while (base <= 0 || altura <= 0){
    printf("Não pode ser negativo ou zero, digite novamente: ");
  }
  float perimetro = 2 * (base + altura);
  float area = base * altura;
  float diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    printf("A seguir, medidas do retângulo: \n- Base: %.2f\n- Altura: %.2f\n- Perímetro: %.2f\n- Área: %.2f\n- Diagonal: %.2f\n", base, altura, perimetro, area, diagonal);
  }

  if (figura == 6){
  printf("\nVocê escolheu o trapézio.\n");
  printf("Digite o valor da base maior do trapézio: ");
  float baseMaior;
  scanf("%f", &baseMaior);
  float baseMenor = baseMaior / 2;
    while (baseMaior <= 0){
      printf("Não pode ser negativo ou zero, digite novamente: ");
      scanf(" %f %f", &baseMaior, &baseMenor);
    }
    
  float baseMed = (baseMaior + baseMenor) / 2;
  printf("Digite o valor da altura do trapézio: ");
  float altura;
  scanf("%f", &altura);
  while (altura <= 0){
    printf("Não pode ser menor ou igual a 0, digite novamente: ");
    scanf("%f", &altura);
  }
  float area = ((baseMaior + baseMenor) * altura) / 2;
    
    printf("Os lados do trapézio são iguais ou diferentes?\n1 - Iguais\n2 - Diferentes\n");
    int lados;
    scanf("%d", &lados);
    
      
      switch (lados){
    
        case 1:{
        float lado;
        printf("Digite o valor do lado do trapézio: ");
        scanf("%f", &lado);
        float perimetro = baseMaior + baseMenor + 2 * lado;
        float diagonal1, diagonal2;
        int anguloA, anguloB;
        printf("Digite os valores dos ângulos do trapézio: ");
        scanf(" %d %d", &anguloA, &anguloB);
          while (anguloA <= 0 || anguloB <= 0){
            printf("Não pode ser menor ou igual a 0, digite novamente: ");
            scanf(" %d %d", &anguloA, &anguloB);
          }
        diagonal1 = sqrt(pow(baseMaior,2) + pow(lado,2) - (2 * baseMaior * lado * cos(anguloA)));
        diagonal2 = sqrt(pow(baseMaior,2) + pow(lado,2) - (2 * baseMaior * lado * cos(anguloB)));
        printf("A seguir, medidas do trapézio: \n- Base maior: %.2f\n- Base menor: %.2f\n- Altura: %.2f\n- Perímetro: %.2f\n- Área: %.2f\n- Diagonal 1: %.2f\n- Diagonal 2: %.2f\n", baseMaior, baseMenor, altura, perimetro, area, diagonal1, diagonal2);
        break;
        }
    

        case 2:{  
      printf("Digite o valor dos lados do trapézio: ");
      float lado1, lado2;
      scanf("%f %f", &lado1, &lado2);
      float perimetro = baseMaior + baseMenor + lado1 + lado2;
      float diagonal1, diagonal2;
      int anguloA, anguloB;
      printf("Digite os valores dos ângulos do trapézio: ");
      scanf(" %d %d", &anguloA, &anguloB);
          while (anguloA <= 0 || anguloB <= 0){
            printf("Não pode ser menor ou igual a 0, digite novamente: ");
            scanf(" %d %d", &anguloA, &anguloB);
          }
      diagonal1 = sqrt(pow(baseMaior,2) + pow(lado1,2) - (2*baseMaior*lado1*cos(anguloA)));
      diagonal2 = sqrt(pow(baseMaior,2) + pow(lado2,2) - (2*baseMaior*lado2*cos(anguloB)));
      printf("A seguir, medidas do trapézio: \n- Base maior: %.2f\n- Base menor: %.2f\n- Altura: %.2f\n- Perímetro: %.2f\n- Área: %.2f\n- Diagonal 1: %.2f\n- Diagonal 2: %.2f\n", baseMaior, baseMenor, altura, perimetro, area, diagonal1, diagonal2);
      return 0;
    }
  }
}
  if (figura == 7){
  printf("Você escolheu o losango.\n");
  printf("Digte o valor da diagonal maior do losango: ");
  float diagonalMaior;
  scanf("%f", &diagonalMaior);

  while (diagonalMaior <= 0){
    printf("Não pode ser menor ou igual a 0, digite novamente: ");
    scanf("%f ", &diagonalMaior);
  }
  float diagonalMenor = diagonalMaior / 2;
  printf("\nDiagonal menor é sempre metade da diagonal maior");
  
  float area = (diagonalMaior * diagonalMenor) / 2;  
  printf("\nDigite o valor do lado do losango: ");
  float lado;
  scanf("%f", &lado);
  while (lado <= 0){
    printf("Para de gracinha, tu sabe que não pode ser menor ou igual a 0, digite novamente: ");
    scanf("%f", &lado);
  }
  float perimetro = 4 * lado;
    
  printf("A seguir, medidas do losango: \n- Diagonal maior: %.2f\n- Diagonal menor: %.2f\n- Medida do Lado: %.2f\n- Perímetro: %.2f\n- Área: %.2f\n", diagonalMaior, diagonalMenor, lado, perimetro, area);

  }

  if (figura == 8){
    printf("Você escolheu o paralelogramos.\n");
    printf("Digite o valor da base do paralelogramo: "); 
    float base;
    scanf("%f", &base);
    printf("Digite o valor do lado do paralelogramo: ");
    float lado;
    scanf("%f", &lado);
    while (lado <= 0 || base <= 0){
      printf("Hahaha, piadista, digite novamente: ");
    }
    float perimetro = 2 * (base + lado);
    printf("Digite a altura do paralelogramo: ");
    float altura;
    scanf("%f", &altura);
    while(altura <= 0){
      printf("Hahaha, piadista, digite novamente: ");
      scanf(" %f", &altura);
    }
    float area = base * altura;
    printf("Valor do ângulo: ");
    float angulo;
    scanf("%f", &angulo);
    float diagonal = sqrt(pow(base, 2) + pow(lado, 2) - lado*base* cos(angulo)); 
    printf("A seguir, medidas do paralelogramo: \n- Base: %.2f\n- Lado: %.2f\n- Perímetro: %.2f\n- Área: %.2f\n- Diagonal: %.2f\n- Altura: %.2f\n", base, lado, perimetro, area, diagonal, altura);
  }
  
  return 0;
}
