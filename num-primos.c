#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int num = atoi(argv[1]);
  for (int i = 2; i < num; i++) num = num % i == 0 ? 1 : num;//si encuentra un número divisible por el input le asgina 1 a num y se corta el for
  printf("%s\n", num == 1 ? "No es primo" : "Es primo");
  return 0;
}