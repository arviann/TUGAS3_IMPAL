#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

typedef struct {
    int accountNumber;
    char status[10];
} Account;

int main() {
    Account accounts[] = {
        {101, "valid"},
        {102, "invalid"},
        {103, "valid"},
        {104, "valid"}
    };
    int totalAccounts = sizeof(accounts) / sizeof(accounts[0]); 
    int inputAcc;
    float amountOfSale = 150000.00;
    int found = 0;
    int isValid = 0; 

    printf("=== Program Servis Komputer (Cek Akun) ===\n");
    printf("Masukkan nomor akun Anda: ");
    if (scanf("%d", &inputAcc) != 1) {
        printf("\nError: Input nomor akun tidak valid.\n");
        return 1;
    }

    for (int i = 0; i < totalAccounts; i++) {
        if (accounts[i].accountNumber == inputAcc) {
            found = 1;
            if (strcmp(accounts[i].status, "valid") == 0) {
                isValid = 1;
            }
            break;
        }
    }

    printf("\n");

    if (found && isValid) {
        printf("PRECONDITION 1 SUKSES: Akun valid.\n");
        printf("=== INVOICE ===\n");
        printf("Account Number : %d\n", inputAcc);
        printf("Amount of Sale : Rp %.2f\n", amountOfSale);
        printf("================\n");
    } 

    else {
        printf("PRECONDITION 1 GAGAL. ");
        
        if (!found) {
            printf("Error: Nomor akun %d tidak ditemukan pada ACCOUNTS.\n", inputAcc);
        } else if (found && !isValid) {
            printf("Error: Status akun %d tidak valid ('%s').\n", inputAcc, accounts[inputAcc - accounts[0].accountNumber].status); 
        } else {
            printf("Terjadi kesalahan validasi yang tidak terduga.\n");
        }
    }

    return 0;
}
