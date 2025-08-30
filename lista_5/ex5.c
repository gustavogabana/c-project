#include <stdio.h>

void quadradoDeSimbolo(int tamanho, char caracter) {
    for (int i = 0; i < tamanho; i++) { //linha
        for (int j = 0; j < tamanho; j++) { //coluna
            printf("%c ", caracter);
        }
        printf("\n");
    }
}

int main() {
    int tamanho = 0;
    char caracter = '.';
    printf("Digite qual o tamanho do quadrado: ");
    scanf("%d", &tamanho);
    printf("Escolha um caracter (*, #, $, @): ");
    scanf(" %c", &caracter);
    quadradoDeSimbolo(tamanho, caracter);
    return 0;
}