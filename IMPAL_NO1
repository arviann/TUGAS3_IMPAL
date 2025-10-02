#include <stdio.h>

int main() {
    int a, b, c;

    printf("Masukkan tiga sisi segitiga (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Cek validitas sisi
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Segitiga tidak dapat dibangun.\n");
        return 0;
    }
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Segitiga tidak dapat dibangun.\n");
        return 0;
    }

    // EQUILATERAL
    if (a == b && b == c) {
        printf("Segitiga Sama Sisi (Equilateral).\n");
    }
    // ISOSCELES
    else if (a == b || b == c || a == c) {
        printf("Segitiga Sama Kaki (Isosceles).\n");
    }
    // RIGHT TRIANGLE
    else if ((a*a + b*b == c*c) ||
             (a*a + c*c == b*b) ||
             (b*b + c*c == a*a)) {
        printf("Segitiga Siku-Siku (Right Triangle).\n");
    }
    // SCALENE
    else {
        printf("Segitiga Bebas (Scalene).\n");
    }

    return 0;
}
