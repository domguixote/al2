#include <stdio.h>

int main () {
    
    int nota = 0;

    printf("Digite a nota do motorista: ");
    int deu_certo = scanf("%i", &nota);
    
    switch (nota) {
         case 1: printf("Voce ganhou '*'.\n"); break;
         case 2: printf("Voce ganhou '**'.\n"); break;
         case 3: printf("Voce ganhou '***'.\n"); break;
         case 4: printf("Voce ganhou ****!.\n"); break;
         case 5: printf("Voce ganhou *****!.\n");
    default:
         printf("Nota invalida! Tente novamente.\n");
       break;
    }

    

    return 0;
}