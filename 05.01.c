#include <stdio.h>
#include <io_utils.h>

int main() {
    int x = 1, y = 2, z[10];
    int *ip;

    ip = &x;
    y = *ip;
    *ip = 0;
    ip = &z[0];
    PRINT_PTR(ip);
    PRINT_INT(x);   // 0
    PRINT_INT(y);   // 1
    PRINT_INT(z[0]);    //unknown

    return 0;
}