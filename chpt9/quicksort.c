#include <stdio.h>

#define N 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void) {
  int a[N], i;
  printf("Enter 10 numbers to be sorted: ");
  scanf("%d%d%d%d%d%d%d%d%d%d", &a[0], &a[1], &a[2], 
                                &a[3], &a[4], &a[5],
                                &a[6], &a[7], &a[8], &a[9]);
  quicksort(a, 0, N - 1);

  printf("In sorted order: ");
  for (i = 0; i < N; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}

void quicksort(int a[], int low, int high) {
  int middle;

  if (low >= high) return;
  middle = split(a, low, high);
  quicksort(a, low, middle - 1);
  quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high) {
  int part_element = a[low];

  for (;;) {
    while (low < high && part_element <= a[high]) {
      high--;
    }
    if (low >= high) break;
    a[low++] = a[high];

    while (low < high && a[low] <= part_element) {
      low++;
    }
    if (low >= high) break;
    a[high--] = a[low];
  }

  a[high] = part_element;
  return high;
}
