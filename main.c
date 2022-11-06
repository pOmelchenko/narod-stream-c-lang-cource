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

    return 0;
}
