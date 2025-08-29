#include <stdio.h>

int main() {
    int rodadas = 0, moedas_coletadas = 0, total = 0;
    while (total < 100) {
        printf("Digite quantas moedas foram coletadas (entre 1 e 10): " );
        scanf("%d", &moedas_coletadas);
        total += moedas_coletadas;
        printf("Faltam %d moedas\n", 100 - total);
        rodadas++;
    }
    printf("Foram necessarias %d rodadas para coletar todas.\n", rodadas);
    return 0;
}