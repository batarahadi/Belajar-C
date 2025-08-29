#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *dataMembaca = fopen("file.txt", "r");
    FILE *dataMenulis = fopen("file.txt", "w");

    if (dataMembaca == NULL || dataMenulis == NULL) {
        printf("Error ! File tidak ditemukan.\n");
        exit(-1);
    }

    fprintf(dataMenulis, "masukin apa ya\n");

    return 0;
}
