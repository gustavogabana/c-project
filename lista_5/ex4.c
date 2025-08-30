#include <stdio.h>

void notaAluno(float nota) {
    if (nota >= 6) {
        printf("Aprovado");
    } else if (nota <= 4 && nota >= 6) {
        printf("Recuperacao");
    } else {
        printf("Reprovado");
    }
}

int main() {
    float nota;
    printf("Digite uma nota de algum aluno: ");
    scanf("%f", &nota);
    notaAluno(nota);
    return 0;
}