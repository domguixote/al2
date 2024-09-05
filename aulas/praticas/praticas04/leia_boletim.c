#include <stdio.h>

int main() {
  
  int matricula = 0;
  float a1 = 0.0f;
  float a2 = 0.0f;
  float media = 0.0f;

  printf("Digite a matricula: ");
  scanf("%i", &matricula);
  //printf("Você digitou: %i\n", matricula);

  printf("Digite a A1: ");
  scanf("%f", &a1);
  //printf("Você digitou: %.1f\n", a1);

  printf("Digite a A2: ");
  scanf("%f", &a2);
  // printf("Você digitou: %.1f\n", a2);

  printf("Digite a media: ");
  scanf("%f", &media);
  //printf("Você digitou: %.1f\n", media);
  
  printf("Matricula\tA1\t\tA2\t\tMedia\n");
  printf("%i\t%.1f\t\t%.1f\t\t%.1f\n", matricula, a1, a2, media);
  
  return 0;
}