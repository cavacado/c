#include <stdio.h>

int main(void) {
  long i, sum = 0;
  printf("This program sums a series of integers.\n");
  printf("Enter integers (0 to terminate) : ");
  while (i != 0) {
    scanf("%ld", &i);
    sum = sum + i;
  }
  printf("The sum is: %ld\n", sum);
}