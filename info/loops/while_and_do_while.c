#include <stdio.h>

int main() {
    int contador = 1;
    printf("while\n");
    while (contador <= 5) {
        printf("Contando: %d\n", contador);
        contador++;
    }
    printf("do while\n");
    int senha = 0;
    do {
        printf("Digite a senha correta (1234): ");
        scanf("%d", &senha);
    } while (senha != 1234);
    printf("Acesso liberado");
    return 0;
}