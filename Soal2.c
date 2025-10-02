#include <stdio.h>
#include <ctype.h>

int main() {
    int computerAmount, peripherals;
    char inBusinessHours, dropOffPickup;
    double baseFee = 0, additionalFee = 0, totalFee = 0;

    printf("=== Program Hitung Biaya Servis Komputer ===\n");

    printf("Masukkan jumlah komputer: ");
    scanf("%d", &computerAmount);

    printf("Masukkan jumlah peripheral: ");
    scanf("%d", &peripherals);

    printf("Apakah servis dilakukan dalam jam kerja? (Y/N): ");
    scanf(" %c", &inBusinessHours);

    printf("Apakah customer bersedia drop off & pick up? (Y/N): ");
    scanf(" %c", &dropOffPickup);

    if (computerAmount == 1 || computerAmount == 2) {
        baseFee = 50;
        additionalFee = 0;
    } else if (computerAmount >= 3 && computerAmount <= 10) {
        baseFee = 100;
        additionalFee = peripherals * 10;
    } else if (computerAmount > 10) {
        baseFee = 500;
        additionalFee = peripherals * 10;
    }
    if (toupper(inBusinessHours) == 'N') {
        baseFee = baseFee * 2;
    }
    if (toupper(dropOffPickup) == 'Y') {
        baseFee = baseFee / 2;
    }
    totalFee = baseFee + additionalFee;

    printf("\n=== INVOICE SERVIS ===\n");
    printf("Jumlah Komputer   : %d\n", computerAmount);
    printf("Jumlah Peripheral : %d\n", peripherals);
    printf("Base Fee          : $%.2f\n", baseFee);
    printf("Additional Fee    : $%.2f\n", additionalFee);
    printf("--------------------------\n");
    printf("Total Fee         : $%.2f\n", totalFee);

    return 0;
}
