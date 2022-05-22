#include <stdio.h>

#define VAR_CONST 12345
#define HELLO_CONST "Hello"

int main() {
    const int i = 123;
    printf("constant value is %d\n", 12);
    printf("constant value is %d\n", i);
    printf("constant value is %d\n", VAR_CONST);
//    i = 12; // не возможно переопределить константу

    // Работа с разными типами данных
    printf("int\n");
    printf("constant value is %ld\n", 234L);  // long
    printf("constant value is %lu\n", 234UL); // unsigned long
    printf("constant value is %lu\n", 234LU); // unsigned long
    printf("constant value is %lu\n", 0xAABBCCDDEEFFLU); // unsigned long
    printf("constant value is %llu\n", 0xFF00CCAAFFAABBCCULL); // unsigned long
    printf("constant value is %llu\n", 0xFFFFFFFFFFFFFFFFULL); // unsigned long
    printf("constant value is %lu\n", 07654321UL); // unsigned long

    printf("double float\n");
    printf("constant value is %.25lf\n", 4.321); // double
    printf("constant value is %.25lf\n", 654321.321e-21); // double
    printf("constant value is %.25f\n", 4.321f); // float
    printf("constant value is %.25f\n", 654321.321e-21f); // float

    printf("char\n");
    printf("constant value is %c - 0x%02X\n", 'z', 'z'); // float
    printf("constant value is %c - 0x%02X\n", '0', '0'); // float
    printf("constant value is %c - 0x%02X\n", '\0', '\0'); // float
    printf("constant value is %c - 0x%02X\n", '\n', '\n'); // float

    printf("string\n");
    const char str1[] = {"Hello!"};
    printf("constant value is %s\n", HELLO_CONST); // string
    printf("constant value is %s\n", str1); // string
    printf("constant \\value\\ is %s\n", str1); // string
    printf("constant \"value\" is %s\n", str1); // string

    return 0;
}
