#include <stdio.h>

int main() {
    int n = 0, even = 2;
    printf("Type in a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", even);
            even += 2;
        }
        printf("\n");
    }
    return 0;
}