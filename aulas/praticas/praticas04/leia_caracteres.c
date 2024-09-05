#include <stdio.h>

int main() {
  
  char tecla = '\0';
  printf("Digite uma tecla: ");
  int deu_certo = scanf("%c", &tecla);
  getchar();
  printf("Você digitou: %c\n", tecla);

  char nome[31];

  printf("Digite seu nome: ");
  scanf("%[^\n]s", nome);
  printf("Você digitou: %s\n", nome);

  return 0;
}
