#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *dataMenulis = fopen("file.txt", "w");
    if (dataMenulis == NULL) {
        printf("Error ! File tidak ditemukan.\n");
        exit(-1);
    }

    char dataMasuk[100];
    printf("Masukkan data yang akan ditulis ke file max 100 karakter: \n");
    scanf("%[^\n]", dataMasuk);
    fprintf(dataMenulis, "%s\n", dataMasuk);

    fclose(dataMenulis);

    FILE *dataMembaca = fopen("file.txt", "r");
    if (dataMembaca == NULL) {
        printf("Error ! File tidak ditemukan.\n");
        exit(-1);
    }

    char dataKeluar[100];
    printf("Isi file.tx adalah:\n");
    while (fgets(dataKeluar, sizeof(dataKeluar), dataMembaca) != NULL) {
        printf("%s", dataKeluar);
    }
    
    fclose(dataMembaca);

    return 0;
}