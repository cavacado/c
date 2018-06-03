#include <stdio.h>

int main(void) {
  int hr, min;
  printf("Enter a 24-hour time (xx:xx): ");
  scanf("%d:%d", &hr, &min);
  printf("Equivalent 12-hour time: ");
  if (hr < 12) {
    printf("%d:%d AM", hr, min);
  } else {
    switch (hr) {
      case 12:
        printf("12:%d PM", min);
        break;
      case 13:
        printf("1:%d PM", min);
        break;
      case 14:
        printf("2:%d PM", min);
        break;
      case 15:
        printf("3:%d PM", min);
        break;
      case 16:
        printf("4:%d PM", min);
        break;
      case 17:
        printf("5:%d PM", min);
        break;
      case 18:
        printf("6:%d PM", min);
        break;
      case 19:
        printf("7:%d PM", min);
        break;
      case 20:
        printf("8:%d PM", min);
        break;
      case 21:
        printf("9:%d PM", min);
        break;
      case 22:
        printf("10:%d PM", min);
        break;
      case 23:
        printf("11:%d PM", min);
        break;
    }
  }
  printf("\n");
}