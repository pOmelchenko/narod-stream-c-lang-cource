#include "main.h"

enum positions {
    FIRST = 1,
    SECOND,
    THIRD
};

typedef unsigned int rub;

typedef enum {
    JUNIOR,
    MIDDLE,
    SENIOR
} grade;

int main(void) {
    rub tax = 100;

    printf("%d, %d, %d\n", SECOND, tax, SENIOR);

    grade lvl = MIDDLE;

    switch (lvl) {
        case JUNIOR:
            printf("Junior\n");
            break;
        case SENIOR:
            printf("Senior\n");
            break;
        default:
            printf("Some one other\n");
            break;
    }

    return 0;
}
