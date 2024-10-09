#include <stdio.h>

int main() {
    
    int nota = 0;

    printf("Entre com a nota do Motorista: ");
    int deu_certo = scanf("%i", &nota);

    // if (nota == 1) {
    //     printf("Ganhou 1 estrela!\n");
    // } else if (nota == 2) {
    //     printf("Ganhou 2 estrelas!\n");
    // } else if (nota == 3) {
    //     printf("Ganhou 3 estrelas");
    // } else if (nota == 4) {
    //     printf("Ganhou 4 estrelas");
    // } else if (nota == 5) {
    //     printf("Ganhou 5 estrelas");
    // } else {
    //     printf("Nota invalida!\n");
    // }
    
    // switch equivale a nota de cima ( == )
    // switch só testa valor inteiro

    switch(nota) {
        case 1: printf("Ganhou 1 estrela!\n"); break;
        case 2: printf("Ganhou 2 estrelas!\n"); break;
        case 3: printf("Ganhou 3 estrelas!\n"); break;
        case 4: printf("Ganhou 4 estrelas!\n"); break;
        case 5: printf("Ganhou 5 estrelas!\n"); break;
        default: printf("Nota invalida!\n"); break;
    }

    printf("MENU PRINCIPAL\n");
    printf("...............\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Recarregar saldo\n");
    printf("3 - Ver recados\n");
    printf("4 - ultimas ligacoes\n");
    printf("5 - Sair\n");
    printf("Entre com a opcao => ");
    int opcao = 0;
    deu_certo = scanf("%i", &opcao);

    int oxe = 0;
    int ent = 0;

    switch(opcao) {
        case 1: printf("Saldo de R$ 10.00\n"); break;
        case 2: printf("Escolha um valor: "); //break;
         deu_certo = scanf("%i", &oxe);
         printf("O valor escolhido foi: R$ %i\n", oxe);
         
         printf("Digite sua senha para confirmar: ");
         deu_certo = scanf("%i", &ent);
         printf("Seu saldo sera recarregado em breve!\n"); break;
        case 3: printf("Voce tem 4 recados\n"); break;
        case 4: printf("61 8888-8888\n61 9999-9999\n"); break;
        case 5: printf("Ate logo!\n");
    }

    return 0;
}