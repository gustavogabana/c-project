#include <stdio.h>

int main() {
    int option = 0;

    printf("Menu:\n");
    printf("1. Hamburguer\n");
    printf("2. HotDog\n");
    printf("3. Pizza\n");
    printf("4. Leave\n");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("You chose Hamburguer.\n");
            break;
        case 2:
            printf("You chose HotDog.\n");
            break;
        case 3:
            printf("You chose Pizza.\n");
            break;
        case 4:
            printf("Exiting the menu.\n");
            break;
        default:
            printf("Invalid option. Please choose a valid menu item.\n");
            break;
    }


    return 0;
}