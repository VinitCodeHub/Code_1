#include <stdio.h>
#include "CALCULATOR.H"
//this code is for simple calculator
int main() 
{
    int choice, a, b;
    
    while (1) {
        printf("\nSimple Calculator:\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting program...\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        switch (choice) {
            case 1:
                printf("Result: %d\n", add(a, b));
                break;
            case 2:
                printf("Result: %d\n", sub(a, b));
                break;
            case 3:
                printf("Result: %d\n", mul(a, b));
                break;
            case 4:
                if (b == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    printf("Result: %.2f\n", divide(a, b));
                }
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

