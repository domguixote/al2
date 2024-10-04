#include <stdio.h>

int main() {
  
  int numero1;
  int numero2; 
  float numero3;

  printf("Digite um número inteiro: ");
  int deu_certo = scanf("%d", &numero1);
  printf("Digite outro número inteiro: ");
  deu_certo = scanf("%d", &numero2);
  printf("Digite um numero flutuante: ");
  deu_certo = scanf("%f", &numero3);

  int soma = numero1 + numero2;
  printf("A soma de %d com %d é igual a %d\n", numero1, numero2, soma);

  int subtracao = numero1 - numero2; 
  printf("A subtracao de %d com %d é igual a %d\n", numero1, numero2, subtracao);

  int multiplicacao = numero1 * numero2;
  printf("A multiplicação de %d com %d é igual a %d\n", numero1, numero2, multiplicacao);
    
  int divisao = numero1 / numero2;
  printf("A divisão de %d por %d é igual a %d\n", numero1, numero2, divisao);

  int resto_divisao = numero1 % numero2;
  printf("O resto da divisão de %d por %d é igual a %d\n", numero1, numero2, resto_divisao);

  float divisao_fracionada = numero1 / numero3;
  printf("A divisão fracionada de %d por %.2f é igual a %f\n", numero1, numero3, divisao_fracionada);

  
  return 0;
}