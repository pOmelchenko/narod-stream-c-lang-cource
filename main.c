#include <stdio.h>

int main() {
    /**
     * while loop
     */
    int i = 10;
    while (i >= 0) {
        printf("%d\n", i);
        i--;
    }

    printf("========================\n");

    /**
     * do-while loop
     */
    i = 10;
    do {
        printf("%d\n", i);
        i--;
    } while (i >= 0);

    printf("========================\n");

    /**
     * for loop
     */
    for (i=0; i<=10; i++) {
        printf("%d\n", i);
    }

    return 0;
}
