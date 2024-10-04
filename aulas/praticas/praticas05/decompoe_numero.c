#include <stdio.h>

int main() {
  //1 - declare a variavel numero
  
  int numero;
  
  //2 - ler a variavel 
  
  printf("Digite um numero: ");
  int deu_certo = scanf("%i", &numero);

  //3 - declarar as variaveis m,c,d,u
  
  int milhares;
  int centenas;
  int dezenas;
  int unidades;
  
  //4 - calcular o valor delas a partir da variavel numero

  unidades = numero % 10;             
  dezenas = (numero / 10) % 10;       
  centenas = (numero / 100) % 10;    
  milhares = (numero / 1000) % 10;    
  
  //5 - imprimir o resultado 
  printf("O número %i é decomposto em %i milhar(es), %i centena(s), %i dezena(s), e %i unidade(s)\n", numero, milhares, centenas, dezenas, unidades);

  

    
  
  
  
  
  
  
  return 0;
}