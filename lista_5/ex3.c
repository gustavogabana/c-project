#include <stdio.h>

float maiorNumero(float num1, float num2, float num3) {
    if (num1 > num2 && num1 > num3) {
        return num1;
    } else if (num2 > num3) {
        return num3;
    } else {
        return num3;
    }
}

int main() {
    float num1, num2, num3;
    printf("Digite 3 numeros: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("O maior entre os numeros eh: %.2f", maiorNumero(num1, num2, num3));
    return 0;
}