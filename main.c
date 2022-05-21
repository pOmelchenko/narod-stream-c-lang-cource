#include <stdio.h>

int main() {
    int n = 0;
    char *strnum;

    while ((n>=0) && (n<=10)) {
        printf("Please enter an integer\n");
        printf("To exit the program, enter number greater than 10 ...\n");
        scanf("%d", &n);
        strnum = n == 0 ? "zero" :
                 n == 1 ? "one" :
                 n == 2 ? "two" :
                 n == 3 ? "three" :
                 n == 4 ? "four" :
                 n == 5 ? "five" :
                 n == 6 ? "six" :
                 n == 7 ? "seven" :
                 n == 8 ? "eight" :
                 n == 9 ? "nine" :
                 n == 10 ? "ten" :
                 "greater than 10 or less than 0";
        printf("The number entered is %s.\n", strnum);
    }

    return 0;
}
