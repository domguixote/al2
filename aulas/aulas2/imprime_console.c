#include <stdio.h> //biblioteca entrada e saida

int main() {
  // imprime um texto
  printf("\ntop dez numeros massas\n\n");
  
  // imprime um numero inteiro
  printf("%i\n\n", 10);
  
  printf("%5i\n\n", 100);
  
  printf("%05i\n\n", 1);

  printf("%i, %i\n\n", -10, 20);

  //imprime um numero decimal
  printf("%f\n\n", 10.5);
//o ponto indica quantos numeros depois da virgula
  printf("%.2f\n\n", 10.5999);
  //exibe 10 digitos depois da virgula
  printf("%10.2f\n\n", 10.5999);
  printf("%10.2f\n\n", 10288.4567);

  //exibir uma data
  printf("%02i/%02i/%04i\n\n", 21, 8, 2024);
  
  //imprime caractere aspas simples 
  printf("%c\n\n", 'a');
  printf("%c\n\n", 68);// d = 68 

  //imprime um string
  printf("%s\n\n", "salve guys");
  printf("%30s\n\n", "salve guys");
  printf( "%-30s\n\n", "salve guys!");
  
  
  
  return 0;
}