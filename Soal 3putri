#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int accountNumber;
    char status[10];
} Account;

int main() {
    Account accounts[] = {
        {101, "valid"},
        {102, "invalid"},
        {103, "valid"}
    };
    int totalAccounts = 3;

    int inputAcc;
    float serviceCost = 150000;
    int found = 0;

    printf("=== Program Servis Komputer ===\n");
    printf("Masukkan nomor akun Anda: ");
    scanf("%d", &inputAcc);

    for (int i = 0; i < totalAccounts; i++) {
        if (accounts[i].accountNumber == inputAcc) {
            found = 1;
            if (strcmp(accounts[i].status, "valid") == 0) {
                printf("\n=== INVOICE ===\n");
                printf("Account Number : %d\n", inputAcc);
                printf("Amount of Sale : Rp %.2f\n", serviceCost);
                printf("================\n");
            } else {
                printf("\nError: Status akun %d tidak valid.\n", inputAcc);
            }
            break;
        }
    }

    if (!found) {
        printf("\nError: Nomor akun %d tidak ditemukan.\n", inputAcc);
    }
    return 0;
}
