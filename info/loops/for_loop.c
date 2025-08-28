#include <stdio.h>

int main() {
    printf("Loop progressivo\n");
    for (int i = 0; i < 5; i++) {
        printf("++: %d\n", i);
    }
    printf("Loop regressivo\n");
    for (int i = 5; i >= 0; i--) {
        printf("--: %d\n", i);
    }
    printf("Loop aninhado\n");
    for (int i = 0; i < 6; i++) {
        printf("i: %d\n", i);
        for (int j = 0; j < 6; j++){
            printf("j: %d\n", j);
        }
    }

    return 0;
}