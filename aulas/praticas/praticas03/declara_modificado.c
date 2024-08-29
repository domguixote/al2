#include <stdio.h>

int main() {

  long int população_mundial = 7800000000L;
  
  printf("População mundial: %li\n", população_mundial);

  const short int HORA_EM_SEGUNDOS = 3600;
  printf("1 hora corresponde a %i segundos.\n", HORA_EM_SEGUNDOS);

  long double precisao_extrema = 3.14159265358979323846L;
  printf("Precisão extrema: %.20Lf\n", precisao_extrema);
  
  return 0;
}