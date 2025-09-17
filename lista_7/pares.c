#include <stdio.h>

int main() {
    int numeros[10], pares[10], count = 0;
    printf("Digite 10 numeros\n");
    for (int i = 0; i < 10; i++) {
        printf("%d numero: ", i + 1);
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {
            pares[i] = numeros[i];
            count++;
        }
    }
    printf("Numeros pares: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", pares[i]);
    }
    return 0;
}