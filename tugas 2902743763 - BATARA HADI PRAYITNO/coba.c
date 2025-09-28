#include <stdio.h>
#define SIZE 3  

int pertambahan(int a, int b, int c) { return a + b + c; }
int pengurangan(int a, int b, int c) { return a - b - c; }
int perkalian(int a, int b, int c) { return a * b * c; }
float pembagian(int a, int b, int c) {
    if (b == 0 || c == 0) {
        printf("Error: Tidak bisa membagi dengan nol!\n");
        return 0;
    } 
    return (float)a / b / c;
}
float rataRata(int a, int b, int c) { return (float)(a + b + c) / SIZE; }

int main() { 
    int dataAngka[SIZE];
    int *pointer = dataAngka;
    char ulang;
    
    do {
        printf("Masukkan 3 angka: ");
        for (int i = 0; i < SIZE; i++) {
            scanf("%d", &pointer[i]);
        }

        printf("penjumlahan = %d\n", pertambahan(dataAngka[0], dataAngka[1], dataAngka[2]));
        printf("pengurangan = %d\n", pengurangan(dataAngka[0], dataAngka[1], dataAngka[2]));
        printf("perkalian   = %d\n", perkalian(dataAngka[0], dataAngka[1], dataAngka[2]));
        printf("pembagian   = %.2f\n", pembagian(dataAngka[0], dataAngka[1], dataAngka[2]));
        printf("rata-rata   = %.2f\n", rataRata(dataAngka[0], dataAngka[1], dataAngka[2]));

        printf("Apakah ingin melakukan operasi lagi? (Y/n): ");
        scanf(" %c", &ulang);
    } while (ulang == 'Y' || ulang == 'y');
    
    return 0; 
}
