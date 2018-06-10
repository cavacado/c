#include <stdio.h>

int main(void) {
  int y, i, j;
  float r, prev[5] = {100, 100, 100, 100, 100};
  printf("Enter interest rate: ");
  scanf("%f", &r);
  printf("Enter number of years: ");
  scanf("%d", &y);
  printf("Years       %0.0f%%       %0.0f%%       %0.0f%%       %0.0f%%       %0.0f%%\n", r, r + 1, r + 2, r + 3, r + 4);
  for (i = 0; i < y; i++) {
    printf("%d       %0.2f       %0.2f       %0.2f       %0.2f       %0.2f\n",
    i + 1,
    (r / 100 + 1) * prev[0],
    ((r + 1) / 100 + 1) * prev[1],
    ((r + 2) / 100 + 1) * prev[2],
    ((r + 3) / 100 + 1) * prev[3],
    ((r + 4) / 100 + 1) * prev[4]);
    for (j = 0; j < (int) (sizeof(prev) / sizeof(prev[0])); j++) {
      prev[j] = ((r + j) / 100 + 1) * prev[j];
    }
  }
}