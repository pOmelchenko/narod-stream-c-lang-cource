#include <stdio.h>

int main() {
    unsigned char i;
    char string[10] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};

    for (i = 0; i < 10; i++) {
        printf("%d ", string[i]);
    }

    printf("\n\n");

    for (i = 0; i < 10; i++) {
        printf("%c ", string[i]);
    }

    printf("\n\n");

    printf("%s", string);

    return 0;
}
