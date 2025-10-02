#include <stdio.h>
#include <string.h>

typedef struct {
    int accountNumber;
    char status[10];
} Account;

int main() {
    Account accounts[] = {
        {1001, "valid"},
        {1002, "invalid"},
        {1003, "valid"}
    };

    int inputAcc, i, found = 0;
    float amountOfSale;

    printf("Masukkan nomor akun: ");
    scanf("%d", &inputAcc);
    printf("Masukkan jumlah biaya servis: ");
    scanf("%f", &amountOfSale);

    for (i = 0; i < 3; i++) {
        if (accounts[i].accountNumber == inputAcc) {
            found = 1;
            if (strcmp(accounts[i].status, "valid") == 0) {
                printf("\n--- INVOICE ---\n");
                printf("Account Number: %d\n", inputAcc);
                printf("Amount of Sale: $%.2f\n", amountOfSale);
            } else {
                printf("Error: Account tidak valid!\n");
            }
            break;
        }
    }

    if (!found) {
        printf("Error: Account tidak ditemukan!\n");
    }

    return 0;
}
