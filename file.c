#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Error ! File tidak ditemukan.\n");
        return -1;
    }
    fprintf(file, "hallo\n");

    fclose(file);
    return 0;
}