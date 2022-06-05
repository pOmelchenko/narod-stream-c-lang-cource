#include <stdio.h>
#include <strings.h>

void int_to_binary(int, char*);

int main(void) {
    char str[35] = {};
    int a = 0b00111000, b = 0b10000010, c = 0b01000001;

    int_to_binary(a | (b ^ c), str);
    printf("value is %s", str);
    return 0;
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