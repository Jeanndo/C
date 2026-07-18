#include <stdio.h>


int main() {

    int i = 0; // Initialize the loop variable

    while(i < 10) { // Condition for the while loop
        printf("%d\n", i); // Print the current value of i
        i++; // Increment the loop variable
    }

    getchar(); // Wait for user input before closing the program

    return 0;
}