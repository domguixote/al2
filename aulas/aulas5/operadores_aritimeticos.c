#include <stdio.h>

int main() {
  //Entrada
  int numero1;
  int numero2;
  float numero3;

  printf("Entre com um número inteiro: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com outro número inteiro: ");
  deu_certo = scanf("%i", &numero2);

  printf("Entre com outro número decimal: ");
  deu_certo = scanf("%f", &numero3);
  
  //Processamento

  int soma = numero1 + numero2;
  int subtracao = numero1 - numero2;
  int multiplicacao = numero1 * numero2;
  int divisao = numero1 / numero2;
  int resto_divisao = numero1 % numero2;
  float fracao = numero1 / numero3;
  
  
  //Saída

  printf("%i + %i = %i\n", numero1, numero2, soma);
  printf("%i - %i = %i\n", numero1, numero2, subtracao);
  printf("%i * %i = %i\n", numero1, numero2, multiplicacao);
  printf("%i / %i = %i\n", numero1, numero2, divisao);
  printf("%i / %f = %f\n", numero1, numero3, fracao);
  printf("%i %% %i = %i\n", numero1, numero3, resto_divisao);

  

















  
  
  return 0;
}