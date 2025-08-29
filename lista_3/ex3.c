#include <stdio.h>

int main() {
    int n = 0;
    printf("Type in a number: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        printf("%d x %d = %d\n", n, i, i * n);
    }
    return 0;
}