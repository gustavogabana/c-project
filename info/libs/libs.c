#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>

int main() {
    // math.h
    int base = 2, expoente = 3;
    printf("2 elevado a 3: %.2f\n", pow(2, 3));
    printf("Raiz quadrada de 25: %.2f\n", sqrt(25));

    // stdlib.h, time.h
    srand(time(NULL));
    int numero = rand() % 100;
    printf("Numero aleatorico (0 ate 100): %d\n", numero);

    char texto[] = "123";
    int valor = atoi(texto);
    printf("Convertido: %d\n", valor);

    // string.h
    char nome[] = "Nome";
    char sobrenome[] = " Sobrenome";
    strcat(nome, sobrenome);
    printf("Nome completo: %s\n", nome);
    printf("Tamanho da string: %d\n", strlen(nome));
    if (strcmp(nome, "Nome sobrenome") == 0) {
        printf("Nome correto.\n");
    } else {
        printf("Nome incorreto.\n");
    }

    // locale.h
    setlocale(LC_ALL, "");
    printf("Locale.h: Coração\n");

    return 0;
}