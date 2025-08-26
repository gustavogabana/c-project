#include <stdio.h>

int main() {
    int age = 0, gols_scored = 0;
    printf("Digite sua idade: ");
    scanf("%d", &age);
    printf("Digite o numero de gols marcados: ");
    scanf("%d", &gols_scored);

    if(age <= 20 && gols_scored > 10) {
        printf("Jovem talento\n");
    } else if(age <= 20 && gols_scored <= 10) {
        printf("Jovem em desenvolvimento\n");
    } else if(age > 20 && gols_scored > 15) {
        printf("Jogador em grande fase\n");
    } else if (age > 20 && gols_scored < 15) {
        printf("Estevao\n");
    } else {
        printf("Dados invalidos\n");
    }

    return 0;
}