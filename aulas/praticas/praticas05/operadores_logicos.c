#include <stdio.h>

int main() {

  int p;
  int q;

  printf("Digite um numero inteiro: ");
  int deu_certo = scanf("%i", &p);
  
  printf("Digite outro numero inteiro: ");
  deu_certo = scanf("%i", &q);
  
  printf("%i && %i = %i\n", p, q, p && q);

  printf("%i || %i = %i\n", p, q, p || q);

  printf("!%i = %i\n", p, !p);
  printf("!%i = %i\n", q, !q);
  
  
  return 0;
}