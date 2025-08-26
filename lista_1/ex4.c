#include <stdio.h>

int main() {
    int wins = 0, losses = 0, draws = 0, pointsPerWin = 3, pointsPerLoss = 1;

    printf("Qual o numero de vitorias? ");
    scanf("%d", &wins);

    printf("Qual o numero de derrotas? ");
    scanf("%d", &losses);

    printf("Qual o numero de empates? ");
    scanf("%d", &draws);

    int totalPoints = (wins * pointsPerWin) + (losses * pointsPerLoss) + draws;
    printf("O total de pontos do time e: %d\n", totalPoints);

    return 0;
}