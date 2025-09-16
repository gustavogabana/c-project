#include <stdio.h>

int main() {
    int notas[5] = {10, 32, 9, 2, 3};
    int notas_length = sizeof(notas)/sizeof(notas[0]);
    for (int i = 0; i < notas_length; i++) {
        printf("Notas do vetor: %d\n", notas[i]);
    }
    char palavras[2][50] = {"primeira palavra", "segunda palavra"};
    int palavras_length = sizeof(palavras)/sizeof(palavras[0]);
    for (int i = 0; i < palavras_length; i++) {
        printf("Palavras do vetor: %s\n", palavras[i]);
    }
    // char nomes[3][20];
    // int nomes_length = sizeof(nomes)/sizeof(nomes[0]);
    // for (int i = 0; i < nomes_length; i++) {
    //     printf("Digite um nome: ");
    //     scanf("%s", &nomes[i]);
    // }
    // for (int i = 0; i < nomes_length; i++) {
    //     printf("Nomes digitados: %s\n", nomes[i]);
    // }
    int pontos[5], soma = 0;
    int pontos_length = sizeof(pontos)/sizeof(pontos[0]);
    for (int i = 0; i < pontos_length; i++) {
        printf("Digite os pontos da posicao %d: ", i+1);
        scanf("%d", &pontos[i]);
        soma += pontos[i];
    }
    printf("O valor total da soma eh %d", soma);
    return 0;
}