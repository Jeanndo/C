#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int *ptr1 = malloc(sizeof(int));
    int *ptr2 = malloc(sizeof(*ptr2));

    float *ptr3 = malloc(sizeof(float));
    float *ptr4 = malloc(sizeof(*ptr4));

    if(ptr1 == NULL || ptr2 == NULL || ptr3 == NULL || ptr4 == NULL) {
        free(ptr1);
        free(ptr2);
        free(ptr3);
        free(ptr4);
        return 1;
    }

    free(ptr1);
    free(ptr2);
    free(ptr3);
    free(ptr4);
    
    getchar();
    return 0;
}