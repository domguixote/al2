#include <stdio.h>

int main() {

  const float ICMS = 0.17;
  const float CONFIS = 0.076;
  const float PIS_PASEP = 0.0165;
  
  float preco_inicial;

  printf("Digite o primeiro preço: ");
  int deu_certo = scanf("%f", &preco_inicial);

  float valor_icms = ICMS * preco_inicial;

  float valor_confis = CONFIS * preco_inicial;

  float valor_pis_pasep = PIS_PASEP * preco_inicial;

  float preco_final = preco_inicial + valor_icms + valor_confis + valor_pis_pasep;
  
  //imprimir tabela
  
  printf("\nPreço Inicial..........: R$ %.2f\n", preco_inicial);
  printf("Valor ICMS (17%).......: R$ %.2f\n", valor_icms);
  printf("Valor CONFIS (7,6%)....: R$ %.2f\n", valor_confis);
  printf("Valor PIS/PASEP (1,65%): R$ %.2f\n", valor_pis_pasep);
  printf("Preço Final............: R$ %.2f\n", preco_final);
  
  return 0;
}