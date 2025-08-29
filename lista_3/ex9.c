#include <stdio.h>

int main() {
    int new_cars_quantity = 0;
    printf("How many cars needed to be entered: \n");
    scanf("%d", &new_cars_quantity);
    for (int i = 0; i < new_cars_quantity; i++) {
        char car_model[30] = "";
        int car_year = 0, car_working = 0;
        printf("\nCar %d\n", i + 1);
        printf("Car model: ");
        scanf("%s", &car_model);
        printf("Car year: ");
        scanf("%d", &car_year);
        printf("Is the car currently working (1 for yes and 0 for no): ");
        scanf("%d", &car_working);
        if (car_year < 2005 && car_working == 0) {
            printf("The car %s is old, needs revision.", car_model);
        } else if (car_year >= 2005 && car_working == 0) {
            printf("The car needs maintenance");
        } else {
            printf("The car %s is in good ok");
        }
    }
    return 0;
}