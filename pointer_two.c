#include<stdio.h>

int main() {

    int number1 ;
    int number2 ; 

    int *ptr1,  *ptr2;


    ptr1 = &number1;
    ptr2 = &number2;


    printf("Enter a value for the first number:\n");
    scanf("%d",&number1);

    printf("Enter a value for the second number:\n");
    scanf("%d",&number2);

    printf("The value of the first number is: %d\n", *ptr1);
    printf("The value of the second number is: %d\n", *ptr2);

    printf("the address of the first number is %p\n", (void*)ptr1);
    printf("The address of the second number is %p\n", (void*)ptr2);

    getchar(); // wait for user input before closing the console window

    return 0;
}