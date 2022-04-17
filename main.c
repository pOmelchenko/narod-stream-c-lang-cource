#include <stdio.h>
#include <string.h>

int main() {
    char strings[3][30];

    strcpy(strings[0], "Hello world!\n");
    strcpy(strings[1], "Hi!\n");
    strcpy(strings[2], "Pavel!\n");

    printf("%s%s%s", strings[0], strings[1], strings[2]);

    return 0;
}
