#include <stdio.h>


void createArray();

int main() {

    // Example of a one-dimensional array

    // int arr[100];
    char name[100];
    int i = 0;

    printf("Enter your name:\n ");
    scanf("%s", name);

    printf("Hello, %s!\n", name);

    // Two dimensional array example
    int arr[8][8] = {{1, 2, 3, 4, 5, 6, 7, 8},
                     {9, 10, 11, 12, 13, 14, 15, 16},
                     {17, 18, 19, 20, 21, 22, 23, 24},
                     {25, 26, 27, 28, 29, 30, 31, 32},
                     {33, 34, 35, 36, 37, 38, 39, 40},
                     {41, 42, 43, 44, 45, 46, 47, 48},
                     {49, 50, 51, 52, 53, 54, 55, 56},
                     {57, 58, 59, 60, 61, 62, 63, 64}};


    createArray();



    getchar();
    return 0;

}


void createArray() {
    int x,y;
    int arr[8][8];


    for(x = 0; x < 8; x++) {
        for(y = 0; y < 8; y++){
            arr[x][y] = x+y;
            printf("[%d][%d] = %d\n", x, y, arr[x][y]);
        }
    }
}



// arrays don't require a reference operator (the ampersand) when you want to have a pointer to them. For example:
// 1
// 2
// 3
// char *ptr;
// char str[40];
// ptr = str;  /* Gives the memory address without a reference operator(&) */
// As opposed to
// 1
// 2
// 3
// int *ptr;
// int num;
// ptr = &num; /* Requires & to give the memory address to the ptr */