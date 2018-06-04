#include <stdio.h>

int main(void) {
  int i, num = 0;
  printf("Enter a nonnegative integer: ");
  scanf("%d", &i);
  do {
    i = i / 10;
    num++;
  } while (i > 0);
  printf("The number has %d digit (s)", num);
}