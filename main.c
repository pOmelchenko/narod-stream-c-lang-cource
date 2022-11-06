#include "main.h"

void my_counter() {
    static int cnt = 32;
    printf("%d\n", cnt);
    cnt++;
}

int main(void) {
    for (int i = 0; i < 10; i++) {
        my_counter();
    }

    return 0;
}

// static
// movl 0x42c9(%rip), %esi; main.n

// auto
// movl $0x1, -0x10(%ebp)

// register
// movl $0x1, -0x10(%rbp)
