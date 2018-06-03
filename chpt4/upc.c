#include <stdio.h>

int main(void) {
  int first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, tenth, eleventh, last;
  printf("Enter the first (single) digit: ");
  scanf("%d", &first);
  printf("Enter first group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &second, &third, &fourth, &fifth, &sixth);
  printf("Enter second group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &seventh, &eighth, &ninth, &tenth, &eleventh);
  last = 9 - (3 * (first + third + fifth + seventh + ninth + eleventh) + (second + fourth + sixth + eighth + tenth) - 1) % 10;
  printf("Check digit: %d\n", last);
}