#include <stdio.h>

int main () {
  
  char caractere = 127;
  int inteiro = caractere;
  float flutuante = inteiro;
  double duplo = flutuante;
  printf("\n");
  printf("Caractere = %i\n", caractere);
  printf("Inteiro = %i\n", inteiro);
  printf("Flutuante = %.7f\n", flutuante);
  printf("Duplo = %.7f\n", duplo);
  printf("\n");
  duplo = 256.1234567;
  flutuante = (float) duplo;
  inteiro = (int) flutuante;
  caractere = (char) inteiro;
  printf("\n");
  printf("caractere = %i\n", caractere);
  printf("inteiro = %i\n", inteiro);
  printf("flutuante = %.7f\n", flutuante);
  printf("duplo = %.7f\n", duplo);




  
  return 0;
}