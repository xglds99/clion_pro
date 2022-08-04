#include <stdio.h>

#include "wrap.h"

int main() {
    printf("Hello, World!\n");
    int a = 10;
    int b = 20;
    printf("a = %d, b = %d \n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d \n", a, b);
    return 0;
}
