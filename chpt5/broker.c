#include <stdio.h>

int main(void) {
  float com, value;
  printf("Enter value of trade: ");
  scanf("%f", &value);
  if (value < 2500) {
    com = 30 + ( 1.7 / 100 * value);
  } else if (value < 6250) {
    com = 56 + ( 0.66 / 100 * value);
  } else if (value < 20000) {
    com = 76 + ( 0.34 / 100 * value);
  } else if (value < 50000) {
    com = 100 + ( 0.22 / 100 * value);
  } else if (value < 500000) {
    com = 155 + ( 0.11 / 100 * value);
  } else {
    com = 255 + ( 0.09 / 100 * value);
  }
  printf("Commission: %0.2f\n", com);
  return 0;
}