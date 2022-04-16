/**
 * Многострочкный комментарий
 * почему бы и нет..
 */
#include <stdio.h>

int main()
{
    // вывод строки
    printf("String: ");
    printf("%s\r\n", "Hello world!!!");

    // вывод символа
    printf("Char: ");
    printf("%c\r\n", 97);

#if 0
    printf("Signed integer: ");
    printf("%d\r\n", 3000000000);

    printf("Unsigned integer: ");
    printf("%u\r\n", 3000000000);
#endif

    // вывод коротких чисел
    printf("Signed short: ");
    printf("%hd\r\n", 40000);
    printf("Unsigned short: ");
    printf("%hu\r\n", 40000);

    // вывод длинных чисел
    printf("Signed long: ");
    printf("%lli\r\n", 18446744073709551615);
    printf("Unsigned long: ");
    printf("%llu\r\n", 18446744073709551615);

    // вывод чисел с плавающей точкой
    printf("Float: ");
    printf("%f\r\n", 12.456f);
    printf("Double: ");
    printf("%lf\r\n", 12345.67891);

    // вывод в hex
    printf("Hex: ");
    printf("0x%llX\r\n", 3000000000);

    return 0;
}
