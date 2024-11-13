#include <stdio.h>
#include <string.h>

int main() {
    
    char string[11];

    
    memset(string, '\0', sizeof(string));

    char tecla;

    printf("Digite um caractere: ");
    scanf(" %c", &tecla);

    memset(string, tecla, 10);

    printf("%s\n", string);

    memset(string, '*', 5);

    printf("%s\n", string);

    string[5] = '\0';

    printf("%s\n", string);

    // o) Loop for para imprimir cada posição da string individualmente
    for(int i = 0; i < 10; i++) {
        // p) Imprimindo cada caractere da string
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}