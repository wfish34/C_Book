#include <stdio.h>
#include <io_utils.h>

int swap_error(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

int swap_ok(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


int main() {
    int a = 4;
    int b = 3;
    swap_error(a, b);
    PRINT_INT(a);
    PRINT_INT(b);

    swap_ok(&a, &b);
    PRINT_INT(a);
    PRINT_INT(b);


    return 0;
}