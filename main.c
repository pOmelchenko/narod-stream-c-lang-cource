#include "main.h"

int main(void) {
    auto char str1[35] = {};
    auto int a = 0b00111000, b = 0b10000010;
    auto int res = a | b >> 1;
    int_to_binary(a, str1);
    printf("Value is %s\n", str1);
    int_to_binary(b, str1);
    printf("Value is %s\n", str1);
    printf("=========\n");
    int_to_binary(res, str1);
    printf("Value is %s\n", str1);

    int aa = 10;
    int bb = 5;

    if (aa < bb) {
        unsigned int rr = 42;
        printf("n = %d\n", rr);
    } else {
        unsigned int rr = 10;
        printf("n = %d\n", rr);
    }

    return 0;
}
