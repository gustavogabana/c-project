#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

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
    return 0;
}