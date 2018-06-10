#include <stdio.h>

int main(void) {
  int n, arr[10] = {0};
  printf("Enter a number: ");
  scanf("%d", &n);

  while (n > 0) {
    if (arr[(n % 10) - 1] != 1) {
      arr[(n % 10) - 1] = 1;
      n = n / 10;
    } else {
      printf("Repeated digit\n");
      return 0;
    }
  }
  printf("Not repeated digit\n");
}