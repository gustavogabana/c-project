#include <stdio.h>

int main() {
    int age = 0;
    printf("Digite sua idade: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("maior\n");
    } else {
        printf("menor\n");
    }

    return 0;
}