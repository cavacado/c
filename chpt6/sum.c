#include <stdio.h>

int main(void) {
  int i, sum = 0;
  printf("This program sums a series of integers.\n");
  printf("Enter integers (0 to terminate) : ");
  while (i != 0) {
    scanf("%d", &i);
    sum = sum + i;
  }
  printf("The sum is: %d\n", sum);
}