#include <stdio.h>

int main(void) {
  float a = 93.567, b = 1.123456, c = 3.456, d = 4;
  printf("%-8.1e\n", a);
  printf("%10.6e\n", b);
  printf("%-8.3f\n", c);
  printf("%6.0f\n", d);
  return 0;
}