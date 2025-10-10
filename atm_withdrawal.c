 /*
NAME:JEZRYL LUMBASI 
REG NO:CT101/G/26464/25
DESCRIPTION:ATM WITHDRAWAL 
*/

#include <stdio.h>

int main() {
    int balance;
    int withdraw;

    // Initialize balance
    printf("Enter initial account balance: ");
    scanf("%d", &balance);

    // Withdraw loop
    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%d", &withdraw);

        balance -= withdraw;

        if (balance > 0) {
            printf("Balance after withdrawal: %d\n", balance);
        } else {
            printf("Insufficient funds. Final balance: %d\n", balance);
        }
    }

    return 0;
}