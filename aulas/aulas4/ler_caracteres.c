#include <stdio.h>

int main() {

  char tecla = '\0'; // representa caractere nulo

  printf("Digite uma tecla: ");
  int deu_certo = scanf("%c", &tecla);
  getchar(); // lê apenas um caractere e joga fora (só serve em caractere)
  printf("Você digitou: %c\n", tecla);
  
  printf("Digite outra tecla: ");
  deu_certo = scanf("%c", &tecla);
  getchar();
  printf("Você digitou: %c\n", tecla);
  
  char nome[31]; 
  printf("Entre com um nome:");
  deu_certo = scanf("%[^\n]s", nome); //quando trabalha com %s no scanf não usa o &; E o ^ ignora o espaço
  printf("Você digitou: %s\n", nome);
  
  return 0;
}