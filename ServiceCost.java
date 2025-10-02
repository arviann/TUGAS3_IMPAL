import java.util.Scanner;

class Account {
    int accountNumber;
    String status;

    public Account(int accountNumber, String status) {
        this.accountNumber = accountNumber;
        this.status = status;
    }
}

public class ServiceCost {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // Database akun (dummy)
        Account[] accounts = {
            new Account(1001, "valid"),
            new Account(1002, "invalid"),
            new Account(1003, "valid")
        };

        System.out.print("Masukkan account number: ");
        int accountNumber = input.nextInt();

        System.out.print("Masukkan biaya servis (amount of sale): ");
        double amountOfSale = input.nextDouble();

        int index = findAccount(accounts, accountNumber);

        if (index != -1 && accounts[index].status.equals("valid")) {
            System.out.println("\n=== INVOICE ===");
            System.out.println("Account Number : " + accountNumber);
            System.out.println("Amount of Sale : " + amountOfSale);
            System.out.println("================");
        } else {
            System.out.println("\nERROR: Account tidak valid atau tidak ditemukan!");
        }

        input.close();
    }

    public static int findAccount(Account[] accounts, int accountNumber) {
        for (int i = 0; i < accounts.length; i++) {
            if (accounts[i].accountNumber == accountNumber) {
                return i; 
            }
        }
        return -1; 
    }
}
