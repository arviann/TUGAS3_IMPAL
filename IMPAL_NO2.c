#include <stdio.h>

int main() {
    int computerAmount, peripherals, serviceTimeBusiness, dropPick;
    float baseFee = 0, additionalFee = 0, totalFee;

    printf("Masukkan jumlah komputer: ");
    scanf("%d", &computerAmount);
    printf("Masukkan jumlah peripheral: ");
    scanf("%d", &peripherals);
    printf("Apakah service-time dalam jam kerja? (1=Ya, 0=Tidak): ");
    scanf("%d", &serviceTimeBusiness);
    printf("Apakah customer drop-off dan pick-up sendiri? (1=Ya, 0=Tidak): ");
    scanf("%d", &dropPick);

    // DO CASE
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

    // IF service-time NOT in business hours
    if (!serviceTimeBusiness) {
        baseFee *= 2;
    }

    totalFee = baseFee + additionalFee;

    // IF customer drop off & pick up
    if (dropPick) {
        totalFee /= 2;
    }

    printf("\n--- BIAYA SERVIS ---\n");
    printf("Base Fee: $%.2f\n", baseFee);
    printf("Additional Fee: $%.2f\n", additionalFee);
    printf("Total Fee: $%.2f\n", totalFee);

    return 0;
}
