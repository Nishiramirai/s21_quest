#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

#define N 12

uint16_t rotate_left_16(uint16_t num, int shift) {
    shift %= 16;
    return (num << shift) | (num >> (16 - shift));
}


// Кодовое слово PeersCommunicate, находится на кухне на стене с кодом
// 

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(void) {
    int *nums = malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        nums[i] = fib(i + 1);
    }

    int a = nums[7];
    int b = 11 * 2 - 3;
    int w = (a << 8) | b;
    for (int i = 15; i >= 0; i--) {
        if (w & (1 << i)) {
            printf("%c", '1');
        } else {
            printf("%c", '0');
        }
    }
    printf("\n");

    printf("%d %d %d\n", a, b, w);

    int key = 0x34;
    uint16_t encrypted = rotate_left_16(w, key);
    printf("%d\n", encrypted);
    for (int i = 15; i >= 0; i--) {
        if (encrypted & (1 << i)) {
            printf("%c", '1');
        } else {
            printf("%c", '0');
        }
    }

    printf("\n%c%c\n", a + 52, b + 52);

    free(nums);
}