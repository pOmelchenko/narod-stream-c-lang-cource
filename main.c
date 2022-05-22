#include <stdio.h>

float my_div(float a, float b) {
    return a / b;
}

int main() {
    unsigned int i = 65535;
    unsigned long long j = i;

    printf("Values is %u, %llu", i, j);

    return 0;
}
