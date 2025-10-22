#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("contoh.txt", "w");
    if (fp == NULL) {
        fprintf(stderr, "Gagal membuat file.\n");
        return 1;
    }

    fprintf(fp, "Ini adalah contoh isi file.\n");
    
    fclose(fp);
    return 0;
}
