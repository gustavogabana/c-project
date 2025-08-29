#include <stdio.h>

int main() {
    int numero_secreto = 7, numero_digitado = 0;
    do {
        printf("Qual o numero secreto (entre 1 e 10): ");
        scanf("%d", &numero_digitado);
    } while (numero_secreto != numero_digitado);
    printf("Correto!\n");
    return 0;
}