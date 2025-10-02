#include <stdio.h>

int main() {
    int a, b, c, max, x, y;
    printf("Masukkan 3 bilangan bulat: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Bukan segitiga\n");
        return 0;
    }

    max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Bukan segitiga\n");
        return 0;
    }

    if (a == b && b == c) {
        printf("Segitiga Sama Sisi (Equilateral)\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Segitiga Sama Kaki (Isosceles)\n");
    }
    else if ((a*a + b*b == c*c) ||
             (a*a + c*c == b*b) ||
             (b*b + c*c == a*a)) {
        printf("Segitiga Siku-Siku (Right Triangle)\n");
    }
    else {
        printf("Segitiga Bebas (Scalene)\n");
    }

    return 0;
}
