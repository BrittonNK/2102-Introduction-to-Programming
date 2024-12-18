#include <stdio.h>
#include <ctype.h>
void print_result(double result);
void add(double num1, double num2);
void subtract(double num1, double num2);
void multiply(double num1, double num2);
void divide(double num1, double num2);

// Main function
int main() {
    //User Input
    double num1, num2;
    char operator;

    printf("Enter the first number: \n");
    scanf("%lf", &num1);

    printf("Enter the second number: \n");
    scanf("%lf", &num2);

    printf("Enter the operation (a for add, s for subtract, m for multiply, d for divide): \n");
    scanf(" %c", &operator);
    operator = tolower(operator);

    //function picker
    switch (operator) {
        case 'a':
            add(num1, num2);
        break;
        case 's':
            subtract(num1, num2);
        break;
        case 'm':
            multiply(num1, num2);
        break;
        case 'd':
            divide(num1, num2);
        break;
        default:
            printf("Invalid operator. Please use 'a', 's', 'm', or 'd'.\n");
        break; // Optional but good practice
    }

    return 0;
}

void print_result(double result) {
    printf("\nThe result of the operation is: %.2f\n", result);
}
void add(double num1, double num2) {
    double result = num1 + num2;
    print_result(result);
}
void subtract(double num1, double num2) {
    double result = num1 - num2;
    print_result(result);
}
void multiply(double num1, double num2) {
    double result = num1 * num2;
    print_result(result);
}
void divide(double num1, double num2) {
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        double result = (double)num1 / num2;
        print_result(result);
    }

}
