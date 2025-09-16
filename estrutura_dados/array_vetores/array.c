#include <stdio.h>

int main() {
    int notas[5] = {10, 32, 9, 2, 3};
    int notas_length = sizeof(notas)/sizeof(notas[0]);
    for (int i = 0; i < notas_length; i++) {
        printf("Notas do vetor: %d\n", notas[i]);
    }
    return 0;
}