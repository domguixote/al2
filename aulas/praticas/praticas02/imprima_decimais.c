#include <stdio.h>

int main() {

  printf("\n%f\n", 3.141592);

  printf("\n%.2f\n", 3.141592);

  printf("\n%.7f\n", 3.1415926);
  printf("\n%.7f\n", 3.1415926f);

  printf("\n%5.1f\n%5.1f\n", 10.0, 8.4);

  printf("\nR$ %6.2f\n", 297.85);

  return 0;
}