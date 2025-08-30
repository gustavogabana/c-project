#include <stdio.h>

int contaVogal(char texto[]) {
    int contador = 0;
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == 'a' || texto[i] == 'A' ||
            texto[i] == 'e' || texto[i] == 'E' ||
            texto[i] == 'i' || texto[i] == 'I' ||
            texto[i] == 'o' || texto[i] == 'O' ||
            texto[i] == 'u' || texto[i] == 'U') {
                contador++;
            }
    }
    return contador;
}

int main() {
    char texto[100] = "";
    printf("Digite um texto: ");
    scanf("%s", &texto);
    int result = contaVogal(texto);
    printf("A quantidade de vogais eh: %d", result);
    return 0;
}