#include <stdio.h>
#include <string.h>

int main(void) {
    char *str = "<H";
    char *s1 = "<S";
    for (int i = 0; i < 2; i++) {
        printf("%c", s1[i] + 2);
    }
    printf("\n");

    for (int i = 0; i < 2; i++) {
        printf("%c", s1[i] + 2 + 3);
    }
}