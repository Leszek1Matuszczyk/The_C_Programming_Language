#include <stdio.h>

int power(int Base, int Power);
void main() {
  printf("%d", power(2, 8));
}

int power(int Base, int Power) {
  int i, p;
  p = 1;
  for (i = 0; i < Power; i++) {
    p = Base * p;
  }
  return p;
}
