#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

void classificar(float media) {
    if (media >= 9) {
        printf("Excelente\n");
    } else if (media >= 7) {
        printf("Bom\n");
    } else if (media >= 5) {
        printf("Regular\n");
    } else {
        printf("Ruim\n");
    }
}

int main() {
    float nota1, nota2, nota3, media;
    for (int i = 0; i <= 5; i++) {
        printf("Digite as notas do jogador %d: ", i + 1);
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        media = calcularMedia(nota1, nota2, nota3);
        printf("Media do jogador %d: %.2f\n", i + 1, media);
        classificar(media);
        printf("\n ------------------- \n");
    }
    return 0;
}