#include <stdio.h>

int power(int Base, int Power);
void main() {
  int i;
  for (i = 0; i < 10; i++)
    printf("%d, %d,\t %d \n", i, power(2, i), power(3, i));
}

int power(int Base, int Power) {
  int i, p;
  p = 1;
  for (i = 0; i < Power; i++) {
    p = Base * p;
  }
  return p;
}
