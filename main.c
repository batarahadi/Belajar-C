#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *dataMembaca = fopen("file.txt", "r");
    FILE *dataMenulis = fopen("file.txt", "w");

    if (dataMembaca == NULL || dataMenulis == NULL) {
        printf("Error ! File tidak ditemukan.\n");
        exit(-1);
    }

    char dataMasuk[100];
    printf("Masukkan data yang akan ditulis ke file: ");
    scanf("%[^\n]", dataMasuk);
    fprintf(dataMenulis, "%s\n", dataMasuk);

    return 0;
}
