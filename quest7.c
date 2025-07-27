#include <stdio.h>

// Кодовое слово фактS, находится у входа в роболабу
// 97 71
// ASCII
// aG

int main(void) {
  int a = '`' + 1;
  a = a << 1;
  a = a & 194;
  a = a >> 1;

  char b = (('A' + 1) | 6) + 1;
  printf("%d %d\n", a, b);
  printf("%c%c\n", a, b);
}