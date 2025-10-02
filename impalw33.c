#include <stdio.h>
#include <string.h>

struct Account {
    char accountNumber[20];
    char status[10];
};

int main() {
    struct Account accounts[3] = {
        {"ACC1001", "valid"},
        {"ACC1002", "invalid"},
        {"ACC1003", "valid"}
    };

    char inputAcc[20];
    double amount;
    int found = 0;

    printf("Masukkan account number: ");
    scanf("%s", inputAcc);

    printf("Masukkan amount of sale: ");
    scanf("%lf", &amount);

    for (int i = 0; i < 3; i++) {
        if (strcmp(accounts[i].accountNumber, inputAcc) == 0) {
            found = 1;
            if (strcmp(accounts[i].status, "valid") == 0) {
                printf("\n=== INVOICE ===\n");
                printf("Account Number: %s\n", inputAcc);
                printf("Amount of Sale: $%.2f\n", amount);
            } else {
                printf("\nERROR: Account ditemukan tapi status tidak valid.\n");
            }
            break;
        }
    }

    if (!found) {
        printf("\nERROR: Account number tidak ditemukan.\n");
    }

    return 0;
}
