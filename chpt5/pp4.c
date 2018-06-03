#include <stdio.h>

int main(void) {
  int spd;
  printf("Enter a wind speed: ");
  scanf("%d", &spd);
  printf("Description: ");
  if (spd < 1) {
    printf("Calm");
  } else if (spd < 4) {
    printf("Light air");
  } else if (spd < 28) {
    printf("Breeze");
  } else if (spd < 48) {
    printf("Gale");
  } else if (spd < 64) {
    printf("Storm");
  } else {
    printf("Hurricane");
  }
  printf("\n");
}