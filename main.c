#include <stdio.h>

float my_div(float a, float b) {
    return a / b;
}

int main() {
    int arr_i[10] = {0,1,2,3,4,5,6,7,8,9};
    float f = 3.1f;

    // printf("Value is %d", arr_i[f]); // не рабочий вариант, так как f должен быть int

    return 0;
}
