#include <stdio.h>

int main() {
    int faults = 0;
    printf("Digite a quantidade de cartoes amarelos o jogador recebeu: ");
    scanf("%d", &faults);
    if (faults == 0) {
        printf("O jogador nao foi punido\n");
    } else if (faults == 1) {
        printf("O jogador foi punido com um cartao amarelo\n");
    } else if (faults == 2) {
        printf("O jogador foi punido com um cartao vermelho\n");
    } else {
        printf("Cartoes invalidos\n");
    }

    return 0;
}