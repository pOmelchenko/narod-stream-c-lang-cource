#include <stdio.h>

int main() {
    int n, res;

    printf("Please enter an integer\n");
    scanf("%d", &n);
    res = (n>=0) ? n : -n;
    printf("The modulis of the entered number is %d", res);

    return 0;
}
