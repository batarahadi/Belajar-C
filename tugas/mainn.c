#include <stdio.h>

int pertambahan(int a, int b, int c) { return a + b + c; }
int pengurangan(int a, int b, int c) { return a - b - c; }
int perkalian(int a, int b, int c) { return a * b * c; }
float pembagian(int a, int b, int c) {
    if (b == 0 || c == 0) {
        printf("Error: Tidak bisa membagi dengan nol!\n");
        return 0;
    } else {
        return (float)a / b / c;
    }
}
float rataRata(int a, int b, int c) {
    return (float)(a + b + c) / 3;
}

int main() { 
    int dataAngka[3];
    int *pointer = dataAngka;
    char ulang;
    
    while (1) {
        printf("Masukkan 3 angka: ");
        for (int i = 0; i < 3; i++) {
            scanf("%d", &pointer[i]);
        }

        printf("penjumlahan = %d\n", pertambahan(dataAngka[0], dataAngka[1], dataAngka[2]));
        printf("pengurangan = %d\n", pengurangan(dataAngka[0], dataAngka[1], dataAngka[2]));
        printf("perkalian = %d\n", perkalian(dataAngka[0], dataAngka[1], dataAngka[2]));
        printf("pembagian = %.2f\n", pembagian(dataAngka[0], dataAngka[1], dataAngka[2]));
        printf("rata-rata = %.2f\n", rataRata(dataAngka[0], dataAngka[1], dataAngka[2]));

        printf("Apakah ingin melakukan operasi lagi? (Y/n): ");
        scanf(" %c", &ulang); // ada spasi di depan %c
        if (ulang == 'Y' || ulang == 'y') {
            continue;
        } else {
            break;
        }
    }
    return 0; 
}