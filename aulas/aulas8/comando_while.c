#include <stdio.h>

int main() {
    
    int numero = 0;

    printf("Entre com um numero de 1 a 10: ");
    scanf("%i", &numero);
    
    while ( numero < 1 || numero > 10) {
        while(getchar() != '\n');          // serve para limprar o buffer do teclado
        printf("Numero invalido. Tente novamente\n");
        printf("Entre com um numero de 1 a 10\n");
        scanf("%i", &numero);

    }
    
    //uma repetição parecida com for
    int i = 0;
    while (i < numero) {
        printf("%i", i);
        i++;
    }
        
    
    
    
    
    return 0;
}