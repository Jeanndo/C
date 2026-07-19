#include <stdio.h>

/*
switch ( <variable> ) {
case this-value:
  Code to execute if <variable> == this-value
  break;
case that-value:
  Code to execute if <variable> == that-value
  break;
...
default:
  Code to execute if <variable> does not equal the value following any of the cases
  break;
}
*/

void printDay(int day);

int main()
{
    int input;

    printf("Enter a day of the week (1-7): ");
    scanf("%d", &input);

    printDay(input);

    getchar();

    return 0;
}

void printDay(int day)
{
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid day of the week.\n");
        break;
    }
}