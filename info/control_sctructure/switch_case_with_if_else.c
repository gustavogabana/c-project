#include <stdio.h>

int main() {
    char operator = '.';
    float value1 = 0, value2 = 0;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the values: ");
    scanf("%f %f", &value1, &value2);

    switch(operator) {
        case '+': printf("Result of %.2f %c %.2f = %.2f\n", value1, operator, value2, (value1 + value2)); break;
        case '-': printf("Result of %.2f %c %.2f = %.2f\n", value1, operator, value2, (value1 - value2)); break;
        case '*': printf("Result of %.2f %c %.2f = %.2f\n", value1, operator, value2, (value1 * value2)); break;
        case '/': 
            if (value1 != 0 && value2 != 0) {
                printf("Result of %.2f %c %.2f = %.2f\n", value1, operator, value2, (value1 / value2));
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default: printf("Invalid operator\n"); break;
    }

    return 0;
}