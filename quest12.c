#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Кодовое слово 13b17, находится слева от входа в мираж со стороны атлантиса,
// возле включателя света g4 шифр reverse 4g

int fact(int n) {
  if (n <= 1) {
    return 1;
  }

  return n * fact(n - 1);
}

int main(void) {
  int a = fact(4) * 2 + 4;
  int b = 7 * 14 + 5;

  printf("%c%c", b, a);
}