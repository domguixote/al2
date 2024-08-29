#include <stdio.h>

int main() {
  
  long int ISBN = 0000000000000;
  char NUMERO_PAGINAS = 000;
  short int PRECO = 0000;
  int ANO = 0000;

  printf("ISBN: %.13i\n", ISBN);
  printf("Num. Paginas: %.3i \n", NUMERO_PAGINAS);
  printf("Preco: R$ %.3i%.2f\n", PRECO);
  printf("Publicado em: %.4i\n", ANO);
  
  return 0;
}