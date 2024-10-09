#include <stdio.h>

int main() {
  
  float nota_a1;
  float nota_a2;

  printf("digite sua nota P1: ");
  int deu_certo = scanf("%f", &nota_a1);
 
  printf("Digite sua nota P2: ");
  deu_certo = scanf("%f", &nota_a2);

  float media_iesb = nota_a1 * 0.4 + nota_a2 * 0.6;

  printf("Média final: %.2f\n", media_iesb);
  
  return 0;
}