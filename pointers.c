#include <stdio.h>


int main() {


    /*
      SYNTAX: <pointer_variable> *<variable>;
    */

    int x;

    int *ptr;

    ptr = &x; // assign the address of x to ptr


    printf("Enter a value for x: ");
    scanf("%d", &x); // read the value of x from user input

    printf("The value of x is: %d\n", *ptr);
    printf("The address of x is: %p\n", (void*)ptr);


    getchar(); // wait for user input before closing the console window

    return 0;

}
