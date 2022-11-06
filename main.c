#include "main.h"

int main(void) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            static int n = 1;
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }

    return 0;
}

// static
// movl 0x42c9(%rip), %esi;

// auto
// movl $0x1, -0x10(%ebp)

// register
// movl $0x1, -0x10(%rbp)

