#include <stdio.h>
#include <stdlib.h>

int main() {
    char tempStr[10];
    float tempetura;
    printf("Digite uma temperatura (Ex: 23.5): ");
    scanf("%s", tempStr);
    tempetura = atof(tempStr);
    if (tempetura <= 18.0) {
        printf("Ambiente frio");
    } else if (tempetura <= 26.0) {
        printf("Ambiente bom");
    } else {
        printf("Ambiente quente");
    }
    return 0;
}