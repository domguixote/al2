#include <stdio.h>

int main() {
  //Entrada

  int numero;

  printf("Entre com um número inteiro: ");
  int deu_certo = scanf("%i", &numero);

  //processamento
  //numero = numero + 1;
  int incremento = numero;
  int pos_incremento = incremento++; //se ++ vem depois ele guarda o valor primeiro depois soma
  int pre_incremento = ++incremento; //se ++ vem antes ele soma depois guarda o valor

  //numero = numero - 1;
  int decremento = numero;
  int pos_decremento = decremento--;
  int pre_decremento = --decremento; 
  
  //Saída
  printf("O incremento do número %i é %i\n", numero, incremento);
  printf("O preincremento é %i, e o posincremento é %i\n", pre_incremento, pos_incremento);
 
  
  printf("O decremento do número %i é %i\n", numero, decremento);
  printf("O predecremento é %i, e o posdecremento é %i\n", pre_decremento, pos_decremento); 
  
  
  
  
  
  
  
  return 0;
}