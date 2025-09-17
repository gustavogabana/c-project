#include <stdio.h>

int main() {
    float fps[6], soma = 0, media;
    printf("Digite os FPS registrados em 6 momentos: ");
    for (int i = 0; i < 5; i++) {
        printf("Digite o %d FPS: ", i + 1);
        scanf("%f", &fps[i]);
        soma += fps[i];
    }
    media = soma / 5;
    printf("A media e: %.2f", media);
    return 0;
}