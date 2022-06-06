#include <stdio.h>

int main(void) {

    char item[10] = {};

    while (1) {
        printf("menu 1\n");
        printf("menu 2\n");
        printf("menu 3\n");
        printf("exit 0\n");

        scanf("%s", item);

        if (item[0] > '3' || item[0] < '0') {
            printf("try again\n");
            continue;
        }

        if (item[0] == '0') {
            printf("bye..\n");
            break;
        }

        switch (item[0]) {
            case '1':
                printf("el 1\n");
                break;
            case '2':
                printf("el 2\n");
                break;
            case '3':
                printf("el 3\n");
                break;
        }
    }

    return 0;
}
