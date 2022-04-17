#include <stdio.h>

int main() {
    int number;

    /**
     * вводим данные пользователя
     */
    printf("Введите число ");
    scanf("%d", &number);

    if (number <= 10) {
        printf("Ваше число меньше либо равно 10");
    } else if (number <= 30) {
        printf("Ваше число меньше либо равно 30");
    } else {
        printf("Ваше число больше 30");
    }

    return 0;
}
