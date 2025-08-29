#include <stdio.h>

int main() {
    char name[50] = "";
    int minimum = 0, quant_available = 0, quant_entered =0;
    printf("Type in the quantity of products to be entered: ");
    scanf("%d", &quant_entered);
    for (int i = 1; i <= quant_entered; i++) {
        printf("Product %d", i);
        printf("\nProduct name: ");
        scanf("%s", &name);
        printf("\nQuantity available: ");
        scanf("%d", &quant_available);
        printf("\nMinimum quantity necessery: ");
        scanf("%d", &minimum);
        if (quant_available >= minimum) {
            printf("\nThe product %s is available.", name);
        } else {
            printf("\nThe product %s needs reposition.", name);
        }
    }

    return 0;
}