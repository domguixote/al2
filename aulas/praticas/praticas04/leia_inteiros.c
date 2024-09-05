#include <stdio.h>

int main() {
  
  int numero = 0;

  printf("Digite um numero inteiro: ");
  scanf("%i", &numero);
  printf("Você digitou: %i\n", numero);

  int x = 0;
  int y = 0;

  printf("Digite as coordenadas x e y: ");
  scanf("%i %i", &x, &y);
  printf("Você digitou: %i e %i\n", x, y);
  
  return 0;
}
