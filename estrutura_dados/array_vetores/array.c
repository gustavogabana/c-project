#include <stdio.h>

int main() {
    int notas[5] = {10, 32, 9, 2, 3};
    int notas_length = sizeof(notas)/sizeof(notas[0]);
    char palavras[2][50] = {"primeira palavra", "segunda palavra"};
    int palavras_length = sizeof(palavras)/sizeof(palavras[0]);
    for (int i = 0; i < notas_length; i++) {
        printf("Notas do vetor: %d\n", notas[i]);
    }
    for (int i = 0; i < palavras_length; i++) {
        printf("Palavras do vetor: %s\n", palavras[i]);
    }
    return 0;
}