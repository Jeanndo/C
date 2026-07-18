#include <stdio.h>

int main() {


    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue; // Skip the rest of the loop when i is 5
        }
        printf("%d\n", i);
    }
    getchar();
    return 0;
}