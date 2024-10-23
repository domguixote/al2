#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int opcao = 0;

    do 
    {
        system("clear");
        printf("\nMENU PRINCIPAL\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Recarregar \n");
        printf("3 - Ver recados\n");
        printf("0 - Sair\n");
        printf("Entre com a opcao => ");
        scanf("%i", &opcao);
        while(getchar() != '\n');  //limpar buffer do teclado
        
        switch(opcao) {
             case 1: {
                system("clear"); 
                printf("CONSULTA SALDO\n"); 
                printf("Seu saldo eh R$ 100.00\n"); break;
             }
             case 2: printf("Escolha um valor para a recarga.\n"); break;
             case 3: printf("Voce naum tem recados\n"); break;
             case 0: printf("Ate logo!\n"); break;
            default: printf("Opcao invalida. Tente novamente\n"); 
        }

     if (opcao != 0) {
      printf("Pressione ENTER para continuar...\n");
      getchar(); 
     }

    } while (opcao != 0);
        
    
    return 0;
}