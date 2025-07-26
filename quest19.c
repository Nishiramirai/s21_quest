#include <stdio.h>
#include <string.h>

int main(void) {
    int a = 100 - 1;
    int b = 144 - 35;
    printf("%d %d\n", a, b);

    int r = a ^ b;
    printf("%c\n", r + 86);
}