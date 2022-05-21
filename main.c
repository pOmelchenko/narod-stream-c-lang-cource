#include <stdio.h>

int main() {
    int n;

    printf("Please enter an integer\n");
    scanf("%d", &n);
    printf(
        "The number entered is %s10\n",
        (n > 10)
            ? "greater than "
            : (n == 10)
                ? ""
                : "less than "
    );

    return 0;
}
