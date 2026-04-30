#include <stdio.h>

int main() {
    int a, b;

    printf("Masukkan angka pertama: ");
    scanf("%d", &a);

    printf("Masukkan angka kedua: ");
    scanf("%d", &b);

    printf("Penjumlahan: %d\n", a + b);
    printf("Pengurangan: %d\n", a - b);

    return 0;
}