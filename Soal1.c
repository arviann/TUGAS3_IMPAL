#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int sama(double x, double y) {
    double tolerance = 0.01 * ((x > y) ? x : y);
    return fabs(x - y) <= tolerance;
}
void garis() {
    printf("=====================================\n");
}
int main() {
    int mode;
    printf("=====================================\n");
    printf("     PROGRAM DETERMINE TRIANGLE      \n");
    printf("=====================================\n");
    printf("Pilih mode input:\n");
    printf("1. Bilangan Bulat\n");
    printf("2. Bilangan Pecahan\n");
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &mode);

    garis();
    double a, b, c, max;

    if (mode == 1) {
        printf("Masukkan tiga bilangan bulat (a b c): ");
        scanf("%lf %lf %lf", &a, &b, &c);
    } else if (mode == 2) {
        printf("Masukkan tiga bilangan pecahan (a b c): ");
        scanf("%lf %lf %lf", &a, &b, &c);
    } else {
        printf("Pilihan tidak valid!\n");
        return 0;
    }

    garis();
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("❌ Tidak ada segitiga dapat dibangun.\n");
        garis();
        return 0;
    }
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("❌ Tidak ada segitiga dapat dibangun.\n");
        garis();
        return 0;
    }
    if ((mode == 1 && (a == b && b == c)) ||
        (mode == 2 && (sama(a, b) && sama(b, c)))) {
        printf("🔺 Segitiga SAMA SISI (EQUILATERAL)\n");
    }
    else if ((mode == 1 && (a == b || b == c || a == c)) ||
             (mode == 2 && (sama(a, b) || sama(b, c) || sama(a, c)))) {
        printf("🔺 Segitiga SAMA KAKI (ISOSCELES)\n");
    }
    else if ((mode == 1 && (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)) ||
             (mode == 2 && (sama(a*a + b*b, c*c) || sama(a*a + c*c, b*b) || sama(b*b + c*c, a*a)))) {
        printf("📐 Segitiga SIKU-SIKU (RIGHT TRIANGLE)\n");
    }
    else {
        printf("🔺 Segitiga BEBAS (SCALENE)\n");
    }
    garis();
    printf("Sisi-sisi: a = %.2lf, b = %.2lf, c = %.2lf\n", a, b, c);
    garis();

    return 0;
}
