#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int num = atoi(argv[1]);
  int contador = 0;
  for (int i = 1; i <= num; i++) {
    if (num % i > 0) {
    }
    else {
      contador += 1;
    }
  }
  if (contador == 2) {
    printf("Es primo\n");
  }
  else {
    printf("No es primo\n");
  }
  
  return 0;
}