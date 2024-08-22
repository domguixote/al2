#include <stdio.h>

int main() {
  
  
  printf("================================\n");
  printf("%25s\n", "N O T A   L E G A L");
  printf("================================\n");
  printf("Produto           Qtd Valor Unit\n");
  printf("%s %12.03i %10.2f\n", "Camiseta", 002, 39.99);
  printf("%s %15.03i %10.2f\n", "Calca", 001, 89.90);
  printf("%s %9.03i %10.2f\n", "Meia Social", 003, 19.99);
  printf("================================\n");
  printf("%s%26.2f\n", "Total:", 149.88);
  
  
  
  return 0;
}