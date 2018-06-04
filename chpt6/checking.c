#include <stdio.h>

int main(void) {
  printf("*** ACME checkbook-balancing program ***\n");
  printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");
  int cmd;
  float credit, debit, creditSum = 0, debitSum = 0;
  for (;;) {
    printf("Enter command: ");
    scanf("%d", &cmd);
    switch (cmd) {
      case 0:
        creditSum = 0;
        debitSum = 0;
        break;
      case 1:
        printf("Enter amount of credit: ");
        scanf("%f", &credit);
        creditSum += credit;
        break;
      case 2:
        printf("Enter amount of debit: ");
        scanf("%f", &debit);
        debitSum += debit;
        break;
      case 3:
        printf("Current balance: %.2f\n", creditSum - debitSum);
        break;
      case 4:
        return 0;
    }
  }
}