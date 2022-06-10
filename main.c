#include "main.h"

int main(void) {
    float xf = 8;
    float yf = 3;
    float zf = 2;

    float res = xf + my_div(yf, zf);
    printf("Value is %.5f\n", res);

    res = xf / my_sum(yf, zf);
    printf("Value is %.5f\n", res);

    char str[35] = {};

    int a = 0b00111000, b = 0b10000010;

    int bin_res = a | b ^ 1;

    int_to_binary(a, str);
    printf("Value is %s\n", str);
    int_to_binary(b, str);
    printf("Value is %s\n", str);
    printf("===================\n");
    int_to_binary(bin_res, str);
    printf("Value is %s\n", str);

    return 0;
}
