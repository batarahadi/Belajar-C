#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *dataMenulis = fopen("file.txt", "w");
    if (dataMenulis == NULL) {
        printf("Error ! File tidak ditemukan.\n");
        exit(-1);
    }

    printf("Masukkan data yang akan ditulis ke file max 100 karakter: \n");
    char dataMasuk[100];
    // scanf("%[^\n]", dataMasuk); // cara pertama
    // fprintf(dataMenulis, "%s\n", dataMasuk);
    
    fgets(dataMasuk, sizeof(dataMasuk), stdin); // cara kedua
    fputs(dataMasuk, dataMenulis);

    fclose(dataMenulis);

    FILE *dataMembaca = fopen("file.txt", "r");
    if (dataMembaca == NULL) {
        printf("Error ! File tidak ditemukan.\n");
        exit(-1);
    }

    char dataInputan[100];
    printf("Data yang ada dalam file.txt:\n");
    while (fgets(dataInputan, sizeof(dataInputan), dataMembaca) != NULL) {
        printf("%s", dataInputan);
    }

    fclose(dataMembaca);

    return 0;
}