#include <stdio.h>

int main() {
    printf("Hello, World!");
    int number = 10;
    float decimal = 5.5;
    char character = 'A';
    char name[15] = "name on string";
    printf("\nInteger: %d, Float: %.1f, Character: %c, String: %s\n", number, decimal, character, name);
    return 0;
}