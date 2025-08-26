#include <stdio.h>

int main() {
    int age = 0;
    printf("Digite a idade do jogador: ");
    scanf("%d", &age);
    if (age < 20) {
        printf("Categoria: Sub20\n");
    } else {
        printf("Categoria: Profissional\n");
    }
    return 0;
}