/**
 * Многострочкный комментарий
 * почему бы и нет..
 */
#include <stdio.h>

int main()
{
    char c1, c2;
    unsigned char c3;
    short ns1;
    unsigned short ns2;
    int ni1;
    unsigned ni2;
    long nl1;
    unsigned long nl2;
    long long nll1;
    unsigned long long nll2;
    float f;
    double d;

    c1 = 'r';
    c2 = -115;
    c3 = 195;
    ns1 = -31511;
    ns2 = 63699;
    ni1 = -2011242517;
    ni2 = 4000000000;
    nl1 = -2011242517;
    nl2 = 4000000000;
    nll1 = -8446744073709551615;
    nll2 = 18446744073709551234ULL;
    f = 12.456f;
    d = 1.5364e-20;

    // output
    printf("Char symbol: %c\n", c1);
    printf("Signed char: %hd\n", c2);
    printf("Unsigned char: %hd\n", c3);

    printf("Signed short: %hd\n", ns1);
    printf("Unsigned short: %hu\n", ns2);

    printf("Signed integer: %d\n", ni1);
    printf("Unigned integer: %u\n", ni2);

    printf("Signed long: %ld\n", nl1);
    printf("Unsigned long: %lu\n", nl2);

    printf("Signed long long: %lld\n", nll1);
    printf("Unsigned long long: %llu\n", nll2);

    printf("Float: %f\n", f);
    printf("Double: %.24lf\n", d);

    printf("Hex: 0x%X\n", ni2);

    return 0;
}
