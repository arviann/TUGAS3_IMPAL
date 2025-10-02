#include <stdio.h>

int main() {
    int a, b, c;

    printf("Masukkan 3 bilangan bulat (sisi segitiga): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Tidak ada segitiga dapat dibangun.\n");
        return 0;
    }

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    int sum = a + b + c - max;

    if (max >= sum) {
        printf("Tidak ada segitiga dapat dibangun.\n");
    }
    else if (a == b && b == c) {
        printf("Segitiga Sama Sisi (EQUILATERAL)\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Segitiga Sama Kaki (ISOSCELES)\n");
    }
    else if (max * max == (a * a + b * b + c * c - max * max)) {
        printf("Segitiga Siku-Siku (RIGHT TRIANGLE)\n");
    }
    else {
        printf("Segitiga Bebas (SCALENE)\n");
    }

    return 0;
}
