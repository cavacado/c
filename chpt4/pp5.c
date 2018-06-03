#include <stdio.h>

int main(void) {
  int first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, tenth, eleventh, last;
  printf("Enter the first 11 digits of a UPC: ");
  scanf(
    "%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
    &first,
    &second,
    &third,
    &fourth,
    &fifth,
    &sixth,
    &seventh,
    &eighth,
    &ninth,
    &tenth,
    &eleventh
  );
  last = 9 - (3 * (first + third + fifth + seventh + ninth + eleventh) + (second + fourth + sixth + eighth + tenth) - 1) % 10;
  printf("Check digit: %d\n", last);
}