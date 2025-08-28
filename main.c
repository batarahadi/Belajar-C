#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *dataMasuk = fopen("file.txt", "r");
    FILE *dataKeluar = fopen("file_copy.txt", "w");

    if (dataMasuk == NULL || dataKeluar == NULL) {
        printf("Error ! File tidak ditemukan.\n");
        exit(-1);
    }
    return 0;
}
