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

double max_side(double a, double b, double c) {
    double m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}

double min_side(double a, double b, double c) {
    double m = a;
    if (b < m) m = b;
    if (c < m) m = c;
    return m;
}

int main() {
    int mode;
    garis();
    printf("      PROGRAM DETERMINE TRIANGLE       \n");
    garis();
    printf("Pilih mode input:\n");
    printf("1. Bilangan Bulat\n");
    printf("2. Bilangan Pecahan (Ketelitian 1%%)\n");
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &mode);

    garis();
    double a, b, c;

    if (mode == 1) {
        printf("Masukkan tiga bilangan bulat (a b c): ");
        scanf("%lf %lf %lf", &a, &b, &c);
    } else if (mode == 2) {
        printf("Masukkan tiga bilangan pecahan (a b c): ");
        printf("(Selisih <= 1%% dianggap sama)\n");
        scanf("%lf %lf %lf", &a, &b, &c);
    } else {
        printf("Pilihan tidak valid!\n");
        return 0;
    }

    garis();
    
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("❌ Tidak ada segitiga dapat dibangun (Sisi tidak boleh negatif atau 0).\n");
        garis();
        return 0;
    }
    
    double max_s = max_side(a, b, c);
    double sum_others;
    
    if (max_s == a) sum_others = b + c;
    else if (max_s == b) sum_others = a + c;
    else sum_others = a + b; // max_s == c

    if (max_s >= sum_others) {
        printf("❌ Tidak ada segitiga dapat dibangun.\n");
        printf("   (Sisi terbesar (%.2lf) >= penjumlahan dua sisi lain (%.2lf))\n", max_s, sum_others);
        garis();
        return 0;
    }

    
    int is_sama_sisi, is_sama_kaki, is_siku_siku;
    if (mode == 1) {
        is_sama_sisi = (a == b) && (b == c);
        is_sama_kaki = (a == b) || (b == c) || (a == c);
        double max_sq = max_s * max_s;
        double sum_sq_others = (a*a + b*b + c*c) - max_sq;
        is_siku_siku = (max_sq == sum_sq_others);
    } else { 
        is_sama_sisi = sama(a, b) && sama(b, c);
        is_sama_kaki = sama(a, b) || sama(b, c) || sama(a, c);
        
        double max_sq = max_s * max_s;
        double sum_sq_others = (a*a + b*b + c*c) - max_sq;
        is_siku_siku = sama(max_sq, sum_sq_others);
    }

    if (is_sama_sisi) {
        printf(" Segitiga SAMA SISI. (EQUILATERAL)\n");
    }
    else if (is_sama_kaki) {
        printf(" Segitiga SAMA KAKI. (ISOSCELES)\n");
    }
    else if (is_siku_siku) {
        printf(" Segitiga SIKU-SIKU. (RIGHT TRIANGLE)\n");
    }
    else {
        printf(" Segitiga BEBAS.\n");
    }
    
    garis();
    printf("Sisi-sisi: a = %.2lf, b = %.2lf, c = %.2lf\n", a, b, c);
    garis();

    return 0;
}
