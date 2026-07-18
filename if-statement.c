#include <stdio.h>

int main()
{
    int number; // Variable to store the user input

    printf("Enter an integer: "); // Prompt the user for input
    scanf("%d", &number); // Read the integer input from the user

    if (number > 0) // Check if the number is positive
    {
        printf("You entered a positive number.\n"); // Print message for positive number
    }
    else if (number < 0) // Check if the number is negative
    {
        printf("You entered a negative number.\n"); // Print message for negative number
    }
    else // Check if the number is zero
    {
        printf("You entered zero.\n"); // Print message for zero
    }

    return 0; // Indicate that the program ended successfully
}