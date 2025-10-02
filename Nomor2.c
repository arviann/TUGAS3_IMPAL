#include <stdio.h>
#include <ctype.h> 

int main() {
    int computerAmount;
    int peripherals;
    char inBusinessHours, dropOffPickup;
    double baseFee = 0.0;
    double additionalFee = 0.0;
    double totalFee = 0.0;

    printf("=== Program Hitung Biaya Servis Komputer ===\n");

    printf("Masukkan jumlah komputer: ");
    if (scanf("%d", &computerAmount) != 1 || computerAmount < 0) {
        printf("Input jumlah komputer tidak valid.\n");
        return 1;
    }

    printf("Masukkan jumlah peripheral (misal: keyboard, mouse, printer): ");
    if (scanf("%d", &peripherals) != 1 || peripherals < 0) {
        printf("Input jumlah peripheral tidak valid.\n");
        return 1;
    }

    printf("Apakah servis dilakukan dalam jam kerja? (Y/N): ");
    scanf(" %c", &inBusinessHours);

    printf("Apakah customer bersedia drop off & pick up? (Y/N): ");
    scanf(" %c", &dropOffPickup);

    if (computerAmount == 1 || computerAmount == 2) {
        baseFee = 50.0;
        additionalFee = 0.0; 
    }
    else if (computerAmount >= 3 && computerAmount <= 10) {
        baseFee = 100.0;
        additionalFee = peripherals * 10.0;
    }
    else if (computerAmount > 10) {
        baseFee = 500.0;
        additionalFee = peripherals * 10.0; 
    }

    if (toupper(inBusinessHours) == 'N') {
        baseFee *= 2;
    }

    if (toupper(dropOffPickup) == 'Y') {
        baseFee /= 2;
    }

    totalFee = baseFee + additionalFee;

    printf("\n=== INVOICE SERVIS ===\n");
    printf("Jumlah Komputer     : %d\n", computerAmount);
    printf("Jumlah Peripheral   : %d\n", peripherals);
    printf("--------------------------\n");
    printf("Biaya Dasar (Base Fee)    : $%.2f\n", baseFee);
    printf("Biaya Tambahan (Additional): $%.2f\n", additionalFee);
    printf("--------------------------\n");
    printf("Total Biaya (Total Fee)   : $%.2f\n", totalFee);

    return 0;
}
