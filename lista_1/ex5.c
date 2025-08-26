#include <stdio.h>
#include <math.h>

int main() {
    float wage1 = 0, wage2 = 0;
    printf("Digite o salario do jogador 1: ");
    scanf("%f", &wage1);
    printf("Digite o salario do jogador 2: ");
    scanf("%f", &wage2);
    printf("A diferenca de salario eh: %.1f\n", fabs(wage1 - wage2));
    return 0;
}