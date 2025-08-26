#include <stdio.h>

int main() {
    double total_goals = 0, total_matches = 0;

    printf("Digite o numero total de gols de um jogador: ");
    scanf("%f", &total_goals);

    printf("\nDigite a quantidade de partidas jogadas: ");
    scanf("%f", &total_matches);

    printf("\nA media de gols por partida do jogador e: %.2f\n", total_goals / total_matches);
    return 0;
}