#include <stdio.h>

#define N 10

int main(void) {
  int a[N], i = 0;
  printf("Enter 10 numbers: ");
  for (i = 0; i < N; i++) {
    scanf("%d", &a[i]);
  }
  printf("In reverse order: ");
  while (i != 0) {
    printf("%d ", a[i - 1]);
    i--;
  };
  printf("\n");
}