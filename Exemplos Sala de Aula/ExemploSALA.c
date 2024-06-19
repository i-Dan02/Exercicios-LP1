#include <stdio.h>

int main(int argc, char *argv[]){
  int ord[5]= {2, 6, 1, 8, 3};
  int tmp = 0;

  for (int i = 0; i < 5; i++){
    printf("%d\n", ord[i]);
  }
  for (int i = 1; i < 5; i++)
    for (int j = i; j >= i; j--){
      if (ord[j] < ord[j-1]){
        tmp = ord[j - 1];
        ord[j - 1] = ord[j];
        ord[j] = tmp;
      }
    }
  for (int i = 0; i < 5; i++)
    printf("%d\n", ord[i]);
  printf("\n");
}