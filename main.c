#include "main.h"

float res;
char str1[30] = {};
float yf, zf;

void print_res(char str[]);

int main(void) {
    float xf = 8;
    yf = 3;
    zf = 2;

    res = xf + my_div();
    sprintf(str1, "Value is ");
    print_res(str1);

    res = xf / my_sum();
    sprintf(str1, "Value is ");
    print_res(str1);

    return 0;
}

void print_res(char str[]) {
    printf("%s %.5f\n", str, res);
}
