#include <stdio.h>

float my_div(float a, float b) {
    return a / b;
}

int main() {
    int i = 8;
    int j = 3;
    float f_res = my_div(i, j);
    printf("Result is %.10f", f_res);

    return 0;
}
