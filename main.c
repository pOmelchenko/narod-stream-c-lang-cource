#include <stdio.h>

int main(void) {
    int a = 3;
    int b = 4;
    int c = 5;

    a = b = c = 7;

    printf("%d %d %d", a, b ,c);

    return 0;
}
