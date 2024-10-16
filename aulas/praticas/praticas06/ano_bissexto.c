#include <stdio.h>

int main() {
    
    int ano = 0;    
    
    printf("Digite o ano: ");
    int deu_certo = scanf("%i", &ano);

    
     //verifique se o ano é múltiplo de 4 e não é múltiplo de 100, ou é múltiplo de 400. Se for, 
     //insira uma chamada à função printf() para imprimir que o ano é bissexto. 
     //Senão, insira uma insira uma chamada à função printf() para imprimir que o ano não é bissexto.
    
    
    
    
    
    if (ano % 4 == 0 && ano % 100 == 1 || ano % 400 == 0) {
      printf("O ano %i e bissexto", ano);  
     } else {
      printf("O ano %i nao e bissexto", ano);
     }
    
    

    
    return 0;
}