#include <stdio.h>

void my_func() {
    printf("Hello from my_func\n");
}

void print_sum(int, int);
int return_sum(int, int);

int main() {
    my_func();
    print_sum(2, 5);

    int x = 2;
    int y = 5;
    printf("return_sum: %d + %d = %d\n", x, y, return_sum(x, y));
    return 0;
}

void print_sum(int x, int y) {
    printf("print_sum: %d + %d = %d\n", x, y, x+y);
}

int return_sum(int x, int y) {
    return x + y;
}
