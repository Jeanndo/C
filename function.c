#include <stdlib.h>
#include <stdio.h>

int multiply(int a , int b);


int main() {
    int number1, number2, result = 1;

    printf("Enter the first number: \n");
    scanf("%d", &number1);

    printf("Enter the second number: \n");
    scanf("%d", &number2);

    result = multiply(number1, number2);

    printf("Product: %d\n", result);

    getchar(); // Wait for user input before exiting

    return 0;
}


int multiply(int a, int b) {
    return a * b;
}