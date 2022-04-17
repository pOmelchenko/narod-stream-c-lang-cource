#include <stdio.h>

int main() {
    char * strings[] = {
        "Hello world!\n",
        "Hi!\n",
        "Pavel!\n"
    };

    printf("%s%s%s", strings[0], strings[1], strings[2]);

    return 0;
}
