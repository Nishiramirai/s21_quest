#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Кодовое слово 7vоКВAДRo, находится в акселераторе на желтой стене
// 19
// шифр Reverse
// 91

int main(void) {
  int a = (1 << 4) | (1 << 1) | (1 << 0);
  int b = (1 << 5) | (1 << 4) | (1 << 3) | (1 << 0);

  printf("%d\n", a);
}