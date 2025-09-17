#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int mega[6];
    int jogo[6] = {3, 12, 23, 55, 10, 42};
    int contador = 0;
    printf("--- Mega ---\n");
    for (int i = 0; i < 6; i++) {
        mega[i] = rand() % 60 + 1;
        printf("Numero gerado: %d\n", mega[i]);
    }
    for (int i = 0; i < 6; i++) {
        for (int y = 0; y < 6; y++) {
            if (mega[i] == jogo[y]) {
                contador++;
            }
        }
    }
    if (contador == 6) {
        printf("Ganhou a mega!");
    } else {
        printf("Não ganhou.");
    }
    return 0;
}