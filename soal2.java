import java.util.Scanner;

public class soal2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Masukkan jumlah komputer: ");
        int computerAmount = input.nextInt();

        System.out.print("Masukkan jumlah peripheral: ");
        int peripheralAmount = input.nextInt();

        System.out.print("Apakah servis dilakukan di luar jam kerja? (true/false): ");
        boolean outsideBusinessHours = input.nextBoolean();

        System.out.print("Apakah customer bersedia drop off & pick up sendiri? (true/false): ");
        boolean selfService = input.nextBoolean();

        double baseFee = 0;
        double additionalFee = 0;

        if (computerAmount == 1 || computerAmount == 2) {
            baseFee = 50;
            additionalFee = 0;
        } else if (computerAmount >= 3 && computerAmount <= 10) {
            baseFee = 100;
            additionalFee = 10 * peripheralAmount;
        } else if (computerAmount > 10) {
            baseFee = 500;
            additionalFee = 10 * peripheralAmount;
        }

        if (outsideBusinessHours) {
            baseFee *= 2;
        }

        double totalBaseFee = baseFee + additionalFee;

        if (selfService) {
            totalBaseFee /= 2;
        }

        System.out.println("Total biaya servis: $" + totalBaseFee);

        input.close();
    }
}
