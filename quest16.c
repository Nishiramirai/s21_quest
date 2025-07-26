#include <stdio.h>
#include <string.h>

int main(void) {
    char *str = "UlA=";

    for (int i = 0; i < strlen(str); i++) {
        printf("%d ", str[i] ^ 1);
    }
    printf("\n");

    for (int i = 0; i < strlen(str); i++) {
        printf("%c", (str[i] ^ 1) + 1);
    }
}