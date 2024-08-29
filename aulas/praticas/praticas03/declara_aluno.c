#include <stdio.h> 

int main () {
  
  int MATRICULA = 00000000;

  
  float ALTURA = 9.90;
  
  double PESO = 999.0;
  
  char SEXO = 'F';

  short int IDADE = 99;
  
  
  printf("Matricula: %.8i\n", MATRICULA);
  printf("Idade: %i %s\n", IDADE, "anos");
  printf("Altura: %.2f %c\n", ALTURA, 'm');
  printf("Peso: %.1f %s\n", PESO, "kg");
  printf("Sexo: %c\n", SEXO);
  
  
  
  
  
  
  
  return 0;
}