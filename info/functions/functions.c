#include <stdio.h>

int sum(int x, int y) {
    return x + y;
}

int main() {
    int result = sum(10, 15);
    printf("The resul is %d", result);
    return 0;
}