#include <stdio.h>

int main() {
    int bilBulat;
    float bilPecahan;

    // Input bilangan bulat
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bilBulat);

    // Konversi bilangan bulat ke pecahan (float)
    bilPecahan = (float) bilBulat;
    printf("Hasil typecasting int -> float: %.2f\n", bilPecahan);

    // Input bilangan pecahan
    printf("\nMasukkan bilangan pecahan: ");
    scanf("%f", &bilPecahan);

    // Konversi bilangan pecahan ke bulat (int)
    bilBulat = (int) bilPecahan;
    printf("Hasil typecasting float -> int: %d\n", bilBulat);

    return 0;
}
