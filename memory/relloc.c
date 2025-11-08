#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 1;
    int *nilai = malloc(n * sizeof(int)); 
    // awalnya hanya 1 angka

    nilai[0] = 10; // isi nilai awal

    printf("Isi array awal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nilai[i]);
    }

    // Sekarang kita ingin menambah ukuran array menjadi 3
    n = 3;
    nilai = realloc(nilai, n * sizeof(int)); 
    /*
    realloc memodifikasi ukuran memori
    data lama tetap ada, hanya menambah ruangnya
    */

    // isi nilai baru (elemen ke-1 dan ke-2)
    nilai[1] = 20;
    nilai[2] = 30;

    printf("\nIsi array setelah realloc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nilai[i]);
    }

    // Menampilkan alamat memori untuk menunjukkan bahwa pointer tetap sama atau bisa berubah
    printf("\nAlamat memori nilai: %p\n", nilai);

    free(nilai); // wajib free setelah selesai

    return 0;
}
