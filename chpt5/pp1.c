#include <stdio.h>

int main(void) {
  int num, ans;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (num < 10) {
    ans = 1;
  } else if (num < 100) {
    ans = 2;
  } else if (num < 1000) {
    ans = 3;
  } else {
    ans = 4;
  }
  printf("The number %d has %d digits\n", num, ans);
}