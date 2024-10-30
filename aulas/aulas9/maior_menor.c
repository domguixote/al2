#include <stdio.h>

int main() {
    int numeros[10];
    int maior = -99999;
    int menor = 99999;
    printf("Entre com 10 numeros inteiros:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%io. numero: ", i+1);
        scanf("%i", &numeros[i]);

        if (numeros[i] > maior) {
            maior = numeros[i];
        }

        if (numeros[i] < menor) {
            menor = numeros[i];
        }
        
        
    }
    
    printf("Os numeros digitados foram: ");
    for (int i = 0; i < 10; i++) {
        printf("%i ", numeros[i]);
    }
    printf("\n");
    printf("O maior numero foi %i\n", maior);
    printf("O menor numero foi %i\n", menor);
    

    
    return 0;
}