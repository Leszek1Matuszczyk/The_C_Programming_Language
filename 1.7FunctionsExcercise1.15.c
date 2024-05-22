#include <stdio.h>
#define STEP 20
#define UPPER 300
#define LOWER 0

float fahr(float fahr);

void main() {
  int i;
  for (i = LOWER; i <= UPPER; i = i + STEP) {
    printf("%d,\t%3.2f \n", i, fahr(i));
  }
}
float fahr(float fahr) {
  return (5.0 / 9.0) * (fahr - 32);
}
