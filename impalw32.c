#include <stdio.h>

int main() {
    int computer_amount, peripheral_count;
    int outside_hours, drop_pickup;
    double base_fee = 0, additional_fee = 0, total_fee = 0;

    printf("Masukkan jumlah komputer: ");
    scanf("%d", &computer_amount);

    printf("Masukkan jumlah peripheral: ");
    scanf("%d", &peripheral_count);

    printf("Apakah servis di luar jam kerja? (1=Ya, 0=Tidak): ");
    scanf("%d", &outside_hours);

    printf("Apakah customer drop-off & pick-up sendiri? (1=Ya, 0=Tidak): ");
    scanf("%d", &drop_pickup);

    if (computer_amount == 1 || computer_amount == 2) {
        base_fee = 50;
        additional_fee = 0;
    } 
    else if (computer_amount >= 3 && computer_amount <= 10) {
        base_fee = 100;
        additional_fee = 10 * peripheral_count;
    } 
    else if (computer_amount > 10) {
        base_fee = 500;
        additional_fee = 10 * peripheral_count;
    }

    if (outside_hours == 1) {
        base_fee = base_fee * 2;
    }

    if (drop_pickup == 1) {
        base_fee = base_fee / 2;
    }

    total_fee = base_fee + additional_fee;

    printf("Total biaya servis: $%.2f\n", total_fee);

    return 0;
}
