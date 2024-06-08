#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes
void displayMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double squareRoot(double a);
double square(double a);
unsigned long long factorial(int n);
void clearBuffer();

int main() {
    int choice; // Variable to store user's choice
    double num1, num2, result; // Variables to store numbers and result
    int factNum; // Variable to store the number for factorial
    unsigned long long factResult; // Variable to store the factorial result
    char cont = 'y'; // Variable to control the continuation of the program

    while (cont == 'y' || cont == 'Y') {
        displayMenu(); // Display the calculator menu
        printf("Enter your choice: ");
        scanf("%d", &choice); // Get the user's choice

        switch (choice) {
        case 1:
            // Addition
            printf("Enter two numbers: ");
            if (scanf("%lf %lf", &num1, &num2) != 2) {
                printf("Invalid input. Please enter numeric values.\n");
                clearBuffer(); // Clear the buffer if input is invalid
                break;
            }
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            // Subtraction
            printf("Enter two numbers: ");
            if (scanf("%lf %lf", &num1, &num2) != 2) {
                printf("Invalid input. Please enter numeric values.\n");
                clearBuffer(); // Clear the buffer if input is invalid
                break;
            }
            result = subtract(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            // Multiplication
            printf("Enter two numbers: ");
            if (scanf("%lf %lf", &num1, &num2) != 2) {
                printf("Invalid input. Please enter numeric values.\n");
                clearBuffer(); // Clear the buffer if input is invalid
                break;
            }
            result = multiply(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            // Division
            printf("Enter two numbers: ");
            if (scanf("%lf %lf", &num1, &num2) != 2) {
                printf("Invalid input. Please enter numeric values.\n");
                clearBuffer(); // Clear the buffer if input is invalid
                break;
            }
            if (num2 == 0) {
                printf("Error: Division by zero.\n");
            }
            else {
                result = divide(num1, num2);
                printf("Result: %.2f\n", result);
            }
            break;
        case 5:
            // Square Root
            printf("Enter a number: ");
            if (scanf("%lf", &num1) != 1) {
                printf("Invalid input. Please enter a numeric value.\n");
                clearBuffer(); // Clear the buffer if input is invalid
                break;
            }
            if (num1 < 0) {
                printf("Error: Negative input for square root.\n");
            }
            else {
                result = squareRoot(num1);
                printf("Result: %.2f\n", result);
            }
            break;
        case 6:
            // Square
            printf("Enter a number: ");
            if (scanf("%lf", &num1) != 1) {
                printf("Invalid input. Please enter a numeric value.\n");
                clearBuffer(); // Clear the buffer if input is invalid
                break;
            }
            result = square(num1);
            printf("Result: %.2f\n", result);
            break;
        case 7:
            // Factorial
            printf("Enter a non-negative integer: ");
            if (scanf("%d", &factNum) != 1 || factNum < 0) {
                printf("Invalid input. Please enter a non-negative integer.\n");
                clearBuffer(); // Clear the buffer if input is invalid
                break;
            }
            factResult = factorial(factNum);
            printf("Result: %llu\n", factResult);
            break;
        case 8:
            // Exit
            printf("Exiting the calculator.\n");
            exit(0);
            break;
        default:
            printf("Invalid choice. Please select a valid operation.\n");
        }
        // Ask user if they want to perform another operation
        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &cont);
    }
    return 0;
}

// Function to display the menu
void displayMenu() {
    printf("\nSimple Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Square\n");
    printf("7. Factorial\n");
    printf("8. Exit\n");
}

// Function to add two numbers
double add(double a, double b) {
    return a + b;
}

// Function to subtract two numbers
double subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b) {
    return a * b;
}

// Function to divide two numbers
double divide(double a, double b) {
    return a / b;
}

// Function to calculate the square root of a number
double squareRoot(double a) {
    return sqrt(a);
}

// Function to calculate the square of a number
double square(double a) {
    return a * a;
}


// Using dynamic programming to calculate the factorial
unsigned long long factorial(int n) {

    unsigned long long fact[n + 1];

    fact[0] = 1;

    for (int i = 1; i <= n; i++) {
        fact[i] = i * fact[i - 1];
    }
    return fact[n];
}

// Function to clear the input buffer
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
