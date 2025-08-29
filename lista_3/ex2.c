#include <stdio.h>

int main() {
    int n = 0, result = 0;
    printf("Type in a number: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        result = result + i;
    }
    printf("The sum of 1 until %d is %d", n, result);
    return 0;
}