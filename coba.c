#include <stdio.h>

//  Soal 3: Tampilkan Nilai Maksimum dari Array Menggunakan Pointer

// Deskripsi:

// Buat array int data[6] = {12, 45, 7, 34, 23, 56};

// Gunakan pointer untuk mencari dan menampilkan nilai maksimum dalam array

int main() {
    int data[6] = {12, 45, 7, 34, 23, 56};
    int *ptr = data;
    int max = *ptr;

    for (int i = 0; i < 6; i++) {
        if (*(ptr + i)>max) {
            max = *(ptr +i);
        }
    }
    printf("Nilai maksimum dalam array adalah: %d\n", max);
    return 0;
}