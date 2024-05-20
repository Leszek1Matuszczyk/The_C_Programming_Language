#include<stdio.h>
void main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper=300;
  step=20;

  fahr= lower;
  printf("Fahrehait\t Celsius\n"); //header in exercise 
  while(fahr<=upper){
    celsius = (5.0/9.0) * (fahr-32);
    printf("%3.0f \t\t%6.1f\n",fahr,celsius);// 2 tabs was usedy to align output
    fahr=fahr+step;
  }
}
