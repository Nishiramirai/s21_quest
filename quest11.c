#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


// Кодовое слово 23rdPrimе, находится под гидрапоникой
// OU
// Beaufort key AM
// MS

#define N 200

bool isPrime(int a) {
    if (a <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            return false;
        }
    }

    return true;
}


int main(void) {
    int count = 0;
    int code1 = 0;
    int code2 = 0;
    bool *primeArray = malloc(sizeof(bool) * N + 1);

    if (primeArray == NULL) {
        printf("Память не дали ):\n");
    } else {
        for (int i = 0; i < N + 2; i++) {
            primeArray[i] = isPrime(i);
            if (primeArray[i]) {
                count += 1;
                if (count == 23) {
                    code2 = i;
                }
            }
        }
        code1 = count * 7 + 11;
        free(primeArray);
    }
    
    printf("%c%c\n", code1 + 2, code2 + 2);
}