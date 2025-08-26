#include <stdio.h>

int main() {
    int time = 0;
    
    printf("Digite o tempo que durou uma partida: ");
    scanf("%d", &time);

    double hours = time / 60;
    double minutes = time % 60;

    printf("O tempo da partida foi de %.0f horas e %.0f minutos\n", hours, minutes);

    return 0;
}