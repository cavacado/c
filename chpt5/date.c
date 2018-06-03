#include <stdio.h>

int main(void) {
  int m, d, y;
  printf("Enter date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m, &d, &y);
  printf("Dated this ");
  switch (d) {
    case 1: 
      printf("%dst", d);
      break;
    case 2:
      printf("%dnd", d);
      break;
    case 3:
      printf("%drd", d);
      break;
    default:
      printf("%dth", d);
      break;
  };
  printf(" day of ");
  switch (m) {
    case 1:
      printf("Janurary");
      break;
    case 2:
      printf("Feburary");
      break;
    case 3:
      printf("March");
      break;
    case 4:
      printf("April");
      break;
    case 5:
      printf("May");
      break;
    case 6:
      printf("June");
      break;
    case 7:
      printf("July");
      break;
    case 8:
      printf("August");
      break;
    case 9:
      printf("September");
      break;
    case 10:
      printf("October");
      break;
    case 11:
      printf("November");
      break;
    case 12:
      printf("December");
      break;
  };
  printf(", 20%.2d.\n", y);
}