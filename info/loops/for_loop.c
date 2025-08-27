#include <stdio.h>

int main() {

    for (int i = 0; i < 5; i++) {
        printf("++: %d\n", i);
    }
    printf("Loop progressivo\n");
    for (int i = 5; i >= 0; i--) {
        printf("--: %d\n", i);
    }
    printf("Loop regressivo\n");

    return 0;
}