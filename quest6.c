#include <stdio.h>

// Кодовое слово SIMONELLI, находится в кофейне на кассе
// 1 23 в ASCII
// + 64 = 65 87
// AW
// Rot-13 NJ
// XOR для второго символа
// Nj

int main(void) {
  char a = 26 - 25;
  char b = 7 + 16;
  printf("%c%c\n", a + 64, b + 64);
}