#include <stdio.h>

int main() {
    int gols = 0;
    printf("Qual a quantidade de gols do jogador? ");
    scanf("%d", &gols);

    if (gols > 10) {
        printf("Excelente temporada\n");
    } else if (gols > 5 && gols <= 10) {
        printf("Boa temporada\n");
    } else {
        printf("Temporada abaixo do esperado\n");
    }
    
    return 0;
}