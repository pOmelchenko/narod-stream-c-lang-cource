#include <stdio.h>

int main() {
    unsigned char i;
    int array[6];

    array[0] = 10;
    array[1] = 25;
    array[2] = 33;
    array[3] = 71;
    array[4] = 54;
    array[5] = 99;

    for (i = 0; i < 6; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
