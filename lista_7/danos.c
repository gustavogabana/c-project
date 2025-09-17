#include <stdio.h>

int main() {
    int danos[4] = {10, 33, 99, 78}, maior = danos[0];
    for (int i = 0; i < 4; i++) {
        if (maior < danos[i]) {
            maior = danos[i];
        }
    }
    printf("O maior dano e: %d", maior);
    return 0;
}