#include <stdio.h>

int main() {
    int bilBulat;
    float bilPecahan;
    
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bilBulat);

    bilPecahan = (float) bilBulat;
    printf("Hasil typecasting int -> float: %.2f\n", bilPecahan);

    printf("\nMasukkan bilangan pecahan: ");
    scanf("%f", &bilPecahan);

    bilBulat = (int) bilPecahan;
    printf("Hasil typecasting float -> int: %d\n", bilBulat);
    return 0;
}

