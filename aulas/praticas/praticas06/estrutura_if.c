#include <stdio.h>

int main() {
    
    //1 -

    int numero = 0;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    int numero_eh_divisivel_por_2 = numero % 2 == 0;

    if (numero_eh_divisivel_por_2) {
        printf("O numero %i eh par!\n", numero);
    } else {
        printf("O numero %i eh impar!\n", numero);
    }

    //2 -

    int idade = 0;

    printf("Digite sua idade: ");
    int deu_certo = scanf("%i", &idade);

    if (idade < 16) {
         printf("Voce num pode votar");
    } else  
        if(idade < 18 || idade > 70) {  
         printf("Tu pode votar rapa");
        }
     else {
        printf("Voce eh obrigado a votar!\n"); 
    }

    //3 - 

    float media = 0.0f;

    printf("Digite sua media final: ");
    scanf("%f", &media);

    if (media == 0.0f) {
        printf("Sua mencao eh 'SR'");
    } else if (media < 3.0f) {
         printf("Sua mencao eh 'II'\n");
    } else if (media < 5.0f) {
         printf("Sua mencao eh 'MI'\n");
    } else if (media < 7.0f) {
         printf("Sua mencao eh 'MM'\n");
    } else if (media < 9.0f) {
         printf("Sua mencao eh 'MS'\n");
    } else {
         printf("Sua mencao eh 'SS'\n");
    }

    
    return 0;
}