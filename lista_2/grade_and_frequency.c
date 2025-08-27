#include <stdio.h>

int main() {
    int option = 0;
    printf("1. Verify if a student is approved or not based on their grade and attendance frequency.\n");
    printf("2. Logout\n");
    printf("Choose an option: ");
    scanf("%d", &option);
    if (option > 2 || option < 1) {
        printf("Invalid option!\n");
        return 1;
    }
    if (option == 2) {
        printf("Logging out...\n");
        return 0;
    }
    printf("Enter the student's grade (0-10): ");
    float grade = 0.0;
    scanf("%f", &grade);
    if (grade < 0 || grade > 10) {
        printf("Invalid grade!\n");
        return 1;
    }
    printf("Enter the student's attendance frequency (0-100): ");
    float frequency = 0.0;
    scanf("%f", &frequency);
    if (frequency < 0 || frequency > 100) {
        printf("Invalid frequency!\n");
        return 1;
    }
    if (grade >= 7.0 && frequency >= 75.0) {
        printf("Student approved!\n");
    } else {
        printf("Student not approved!\n");
    }

    return 0;
}