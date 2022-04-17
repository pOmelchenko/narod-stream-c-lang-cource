#include <stdio.h>

int main() {
    int number;

    printf("Чтобы выйти из приложения введите -1\n\n");

    while (1) {
        printf("Введите число ");
        scanf("%d", &number);

        if (number < 0) {
            printf("Выходим...\n");
            return 0;
        } else if (number <= 10) {
            printf("Ваше число меньше либо равно 10\n");
        } else if (number <= 30) {
            printf("Ваше число меньше либо равно 30\n");
        } else {
            printf("Ваше число больше 30\n");
        }
    }
}
