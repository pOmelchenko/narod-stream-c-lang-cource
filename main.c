#include <stdio.h>

float my_div(float a, float b) {
    return a / b;
}

int main() {
    unsigned int i = 65535;
    unsigned char c = i;
    unsigned int j = c;

    printf("Values is %u, %u, %u", i, c, j);

    return 0;
}
