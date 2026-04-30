#include <stdio.h>

// deklarasi fungsi dari teman
float tambah(float a, float b);
float kurang(float a, float b);
float kali(float a, float b);
float bagi(float a, float b);

int main(){
    float a, b, hasil;
    int pilihan;

    printf("=== Kalkulator Sederhana ===\n");
    printf("1. Tambah\n");
    printf("2. Kurang\n");
    printf("3. Kali\n");
    printf("4. Bagi\n");

    printf("Pilih operasi (1-4): ");
    scanf("%d", &pilihan);

    printf("Masukkan angka pertama: ");
    scanf("%f", &a);
    printf("Masukkan angka kedua: ");
    scanf("%f", &b);

    switch(pilihan){
        case 1:
            hasil = tambah(a, b);
            break;
        case 2:
            hasil = kurang(a, b);
            break;
        case 3:
            hasil = kali(a, b);
            break;
        case 4:
            hasil = bagi(a, b);
            break;
        default:
            printf("Pilihan tidak valid!\n");
            return 0;
    }

    printf("Hasil = %.2f\n", hasil);

    return 0;
}