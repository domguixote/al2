#include <stdio.h>

int main() {
  
  //char tecla = '\0'; ?????????????????????
  int quantidade = 0;
  float valor = 0.0f;
  char produto[21];
  printf("\nDigite o produto: ");
  scanf("%s", produto);
  //printf("Produto digitado: %s\n", produto);

  printf("Digite a quantidade: ");
  scanf("%i", &quantidade);
  //printf("quantidade digitada: %i\n", quantidade);

  printf("Digite o valor unt: ");
  scanf("%f", &valor);
  //printf("valor digitado: %.2f\n\n", valor);

  printf("\n==============================\n");
  printf("%20s\n", "P E D I D O");
  printf("==============================\n");
  printf("Produto\t\t\tQtd\tValor unit\n");
  printf("%s\t%7.3i\t\t%6.2f\n", produto, quantidade, valor);
  printf("==============================\n");
  
  return 0;
}