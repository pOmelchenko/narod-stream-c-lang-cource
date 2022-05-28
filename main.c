#include <stdio.h>
#include <strings.h>

#define  BIT0 0
#define  BIT1 1
#define  BIT2 2
#define  BIT3 3
#define  BIT4 4
#define  BIT5 5
#define  BIT6 6
#define  BIT7 7

void int_to_binary(int, char*);
void print_pretty_result(unsigned char, char, unsigned char);

int main(void) {
    char str1[35] = {};
    int n = 0xE567890F;

    int_to_binary(n, str1);
    printf("%s\n", str1);

    printf("\n");

    print_pretty_result(
            0b10101010,
            '&',
            0b10001001
            );

    printf("\n");

    print_pretty_result(
            0b10101010,
            '|',
            0b10001001
    );

    printf("\n");

    print_pretty_result(
            0b10101010,
            '^',
            0b10001001
    );

    printf("\n");

    unsigned char a, res;

    a = 0b00111000;
    res = a >> 2;
    int_to_binary(a, str1);
    printf("  %s >> 2\n", str1);
    int_to_binary(res, str1);
    printf("= %s\n", str1);

    printf("\n");

    a = 0b00111000;
    res = a << 2;
    int_to_binary(a, str1);
    printf("  %s << 2\n", str1);
    int_to_binary(res, str1);
    printf("= %s\n", str1);

    printf("\n");

    a = 0b00111000;
    res = a >> 4;
    int_to_binary(a, str1);
    printf("  %s >> 4\n", str1);
    int_to_binary(res, str1);
    printf("= %s\n", str1);

    printf("\n");

    a = 0b00111000;
    res = a << 4;
    int_to_binary(a, str1);
    printf("  %s << 4\n", str1);
    int_to_binary(res, str1);
    printf("= %s\n", str1);

    printf("\n");

    a = 0b00111000;
    res = ~a;
    int_to_binary(a, str1);
    printf("  ~%s\n", str1);
    int_to_binary(res, str1);
    printf("=  %s\n", str1);

    printf("\n");

    a = 0b11000011;
    int_to_binary(a, str1);
    printf("  76543210\n");
    printf("%s\n", str1);
    a |= ((1 << BIT3) | (1 << BIT4));
    /*
     * 76543210           76543210
     * 00000001 << BIT3 = 00001000
     * |
     * 00000001 << BIT4 = 00010000
     * =
     *                    00011000
     * than `a`
     *     76543210
     * a = 11000011
     *   | 00011000
     * a = 11011011
     */
    printf("set bit3 and bit4 ot 1\n");
    int_to_binary(a, str1);
    printf("%s\n", str1);
    printf("unset bit1 and bit6 ot 1\n");
    a &= ~((1 << BIT1) | (1 << BIT6));
    /*
     * 76543210           76543210
     * 00000001 << BIT1 = 00000010
     * |
     * 00000001 << BIT6 = 01000000
     * =
     *                    01000010
     * ~
     *                    10111101
     * than `a`
     *     76543210
     * a = 11011011
     *   & 10111101
     * a = 10011001
     */
    int_to_binary(a, str1);
    printf("%s\n", str1);

    printf("\n");

    return 0;
}

void print_pretty_result(unsigned char a, char operation, unsigned char b) {
    char str1[35] = {};
    unsigned char res;
    switch (operation) {
        case '&':
            res = a & b;
            break;
        case '|':
            res = a | b;
            break;
        case '^':
            res = a ^ b;
            break;
    }
    int_to_binary(a, str1);
    printf("  %s\n", str1);
    int_to_binary(b, str1);
    printf("%c %s\n", operation, str1);
    int_to_binary(res, str1);
    printf("= %s\n", str1);
}

void int_to_binary(int x, char* in_str) {
    char str_tmp[9] = {};
    unsigned char i, j, k;
    unsigned char bt[4] = {0};

    for (j = 0; j < 4; j++) {
        if (((x >> j * 8) == 0) && (j > 0)) {
            break;
        }
        bt[j] = x >> j * 8;
    }
    strcpy(in_str, "0b");
    for (k = 0; k < j; k++) {
        for (i = 0; i < 8; i++) {
            switch ((bt[j-k-1] >> i) & 0b00000001) {
                case 1:  str_tmp[7-i] = '1'; break;
                case 0:  str_tmp[7-i] = '0'; break;
            }
        }
        strcat(in_str, str_tmp);
    }
}
