#include <stdio.h>

int main () {
    char name[30] = "";
    int age = 0;
    int goals_qtde = 0;

    printf("Insira o nome do jogador: ");
    scanf("%s", &name);

    printf("\nInsira a idade do jogador: ");
    scanf("%d", &age);

    printf("\nInsira a quantidade de gols do jogador: ");
    scanf("%d", &goals_qtde);

    printf("\nO jogador %s tem %d anos e ja fez %d gols na sua carreira.\n", name, age, goals_qtde);

    return 0;
}