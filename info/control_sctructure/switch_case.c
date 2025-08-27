#include <stdio.h>

int main() {

    int option = 1;
    switch (option) {
        case 1:
            printf("Fase 1\n");
            break;
        case 2:
            printf("Fase 2\n");
            break;
        case 3:
            printf("Fase 3\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}