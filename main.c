#include <stdio.h>

int main() {
    int n;

    printf("Please enter an integer\n");
    scanf("%d", &n);
    printf("The number entered is %s than 10\n", (n > 10) ? "greater" : "less than or equal");

    return 0;
}
