#include <stdio.h>

int main() {
    int n, m, res;

    printf("Please enter an integer (n)\n");
    scanf("%d", &n);

    printf("Please enter an integer (m)\n");
    scanf("%d", &m);

    res = (n>m) ? n : m;
    printf("The maximum of entered: %d", res);

    return 0;
}
