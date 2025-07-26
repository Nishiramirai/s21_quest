#include <stdio.h>
#include <string.h>

int main(void) {
    int a = 25 * 3 + 11;
    int b = 8 * 13;

    printf("%d %d\n", a, b);
    char *asc = "ASCII";
    int sum = 0;
    for (int i = 0; i < strlen(asc); i++) {
        sum += (asc[i] % 26) + 3;
    }
    printf("%c%c", a + sum, b + sum);
}