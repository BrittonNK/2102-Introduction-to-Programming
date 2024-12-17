#include <stdio.h>

void printf_result(float result) {
    printf("The result is: %.2f\n", result);
}

void add(int num1, int num2) {
   
    int result = num1 + num2;
    printf_result(result);
}

void subtract(int num1, int num2) {
 
    int result = num1 - num2;
    printf_result(result);
}

void multiply(int num1, int num2) {
    
    int result = num1 * num2;
    printf_result(result);
}

void divide(int num1, int num2) {
    
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        float result = (float)num1 / num2; 
        printf_result(result);
    }
}

int main() {
    int num1, num2;
    char operator;

    
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("Enter an operator (a for add, s for subtract, m for multiply, d for divide): ");
    scanf(" %c", &operator); 

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
            printf("Invalid operator. Please enter a, s, m, or d.\n");
            break;
    }

    return 0;
}
