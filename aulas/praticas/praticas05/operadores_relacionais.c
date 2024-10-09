#include <stdio.h>

int main() {
  
  int numero1;
  int numero2;

  printf("Digite um numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Digite outro numero: ");
  deu_certo = scanf("%i", &numero2);
  
  printf("%i é igual %i? %i\n", numero1, numero2, numero1 == numero2);

  printf("%i é diferente de %i? %i\n", numero1, numero2, numero1 != numero2);

  printf("%i é menor que %i? %i\n", numero1, numero2, numero1 < numero2);

  printf("%i é menor ou igual %i? %i\n", numero1, numero2, numero1 <= numero2);

  printf("%i é maior que %i? %i\n", numero1, numero2, numero1 > numero2);
  
  printf("%i é maior ou igual %i? %i\n", numero1, numero2, numero1 >= numero2);
  
  
  return 0;
}