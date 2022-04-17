#include <stdio.h>

int main() {
    unsigned char i;
    int array[6] = {10, 25, 33, 71, 54, 99};
    
    for (i = 0; i < 6; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
