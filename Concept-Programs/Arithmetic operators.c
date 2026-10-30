#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c;
    int choice;

    printf("Enter your choice:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Remainder\n");

    scanf("%d", &choice);

    switch (choice) {
        case 1:
            c = a + b;
            printf("Addition = %d", c);
            break;

        case 2:
            c = a - b;
            printf("Subtraction = %d", c);
            break;

        case 3:
            c = a * b;
            printf("Multiplication = %d", c);
            break;

        case 4:
            c = a / b;
            printf("Division = %d", c);
            break;

        case 5:
            c = a % b;
            printf("Remainder = %d", c);
            break;

        default:
            printf("Error: Invalid choice");
    }

    return 0;
}
