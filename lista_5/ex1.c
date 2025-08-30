#include <stdio.h>

float media(float nota1, float nota2) {
    return (nota1 + nota2) / 2;
}

int main() {
    float nota1 = 0, nota2 = 0;
    printf("Digite duas notas: ");
    scanf("%f %f", &nota1, &nota2);
    float result = media(nota1, nota1);
    printf("Media: %.2f", result);
    return 0;
}