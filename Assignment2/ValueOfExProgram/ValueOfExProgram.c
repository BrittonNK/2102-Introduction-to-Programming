#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int n);
unsigned long long int factorial2(int n);
int main(){
    //User Input
    int number_of_terms, x;
    double answer=1;
    printf("Enter the number you want to find exponetial of: \n");
    scanf("%d", &x);
    printf("Enter the number terms you would like: \n");
    scanf("%d", &number_of_terms);
    if(number_of_terms<0) {
        do {
            printf("Input a Positive Number: \n");
            scanf("%d", &number_of_terms);
        }while(number_of_terms<=0);
    }



    // Calculation
    for(int i=1; i<=number_of_terms; i++) {
        answer+=(pow(x,i)/factorial2(i));
    }

    //Output
    printf("The exponential answer is: %.4lf", answer);

    return 0;
}
 int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }

}
unsigned long long int factorial2(int n) {
    unsigned long long int result = 1;
    for (int i = 1; i <= n; i++) {
        result *=i;
    }
    return result;

}