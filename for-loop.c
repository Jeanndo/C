#include <stdio.h>

/* for loop syntax

 for(variable initialization; condition; increment/decrement) {
     // code block to be executed
 }

*/   

int main() {
    for(int i = 0 ; i < 10 ; i++) {
        printf("%d\n", i); // Print the current value of i
    }

    getchar(); // Wait for user input before closing the program

    return 0;
}

