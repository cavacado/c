#include <stdio.h>

int main(void) {
  int i, num;
  printf("This program prints a table of squares\n");
  printf("Enter the number of entries in table: ");
  scanf("%d", &num);
  for (i = 1; i <= num; i++) {
    printf("%10d%10d\n", i, i * i);
  }
  return 0;
}