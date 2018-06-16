#include <stdio.h>

void print_count(int n) {
  if (n != 0) {
    printf("T minus %d and counting\n", n);
    n--;
    print_count(n);
  } else {
    printf("done\n");
  }
}

int main(void) {
  int init;
  printf("Counting down from which number? please enter: ");
  scanf("%d", &init);
  print_count(init);

  return 0;
}
