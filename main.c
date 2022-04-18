#include <stdio.h>

int main() {
    int number = 0;

    while (1) {
        printf("%s\n", "Enter number 10, 20 or 30 ");
        scanf("%d", &number);

        switch (number) {
            case 10:
                printf("Hello 10\n");
                break;
            case 20:
                printf("Hello 20\n");
                break;
            case 30:
                printf("Hello 30\n");
                break;
            default:
                printf("Wrong case\n");
                return 0;
        }
    }
}
