#include <stdio.h>
#include <string.h>

int main(void) {
    int b = 'B';
    int u = 'u';

    int w = (b << 8) | u;
    printf("%d\n", w);
    printf("%c%c\n", 66, 117);
}