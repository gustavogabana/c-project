#include <stdio.h>

int main() {
    int stadium_capacity = 0, fans_present = 0;
    printf("Digite a capacidade do estadio: ");
    scanf("%d", &stadium_capacity);
    printf("Digite o numero de torcedores presentes: ");
    scanf("%d", &fans_present);
    float occupancy_rate = (float)fans_present / stadium_capacity * 100;
    if (occupancy_rate > 1) {
        printf("Lotado");
    } else if (occupancy_rate <= 0.9 && occupancy_rate >= 0.7 ) {
        printf("Otima presenca do publico");
    } else if (occupancy_rate <= 0.7 && occupancy_rate >= 0.5) {
        printf("Publico razoavel");
    } else {
        printf("Morumbis");
    }

    return 0;
}