#include <stdio.h>
#include <stdlib.h>

int main() {
    char idadeString[10];
    int idade;
    printf("Digite sua idade: ");
    scanf("%s", idadeString);
    idade = atoi(idadeString);
    if (idade >= 18) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }

    return 0;
}