#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;

    int *arr = calloc(n, sizeof(int)); // alokasikan 5 integer, semua = 0
                                    // harus ada array yaitu n = 5
    // isi array
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // isi data
    }

    // tampilkan
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr); // wajib free setelah selesai

    return 0;
}