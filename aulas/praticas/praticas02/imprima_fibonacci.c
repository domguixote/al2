#include <stdio.h>

int main() {

  printf("%8i %i\n", 1, 1);
  printf("%7i %i %i\n", 1, 2, 1);
  printf("%5i %i %i %i %i\n", 1, 2, 3, 2, 1);
  printf("%3i %i %i %i %i %i %i\n", 1, 2, 3, 5, 3, 2, 1);
  printf("%i %i %i %i %i %i %i %i %i\n", 1, 2, 3, 5, 8, 5, 3, 2, 1);

  return 0;
}