#include <stdio.h>

int main() {
    FILE *fp;
    unsigned char buffer[1024];  // buffer 1 KB
    size_t bytesRead;
    size_t total = 0;

    // buka file gambar dalam mode biner
    fp = fopen("zyro-image.jpg", "rb");
    if (fp == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }

    // baca per 1 KB sampai akhir file
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), fp)) > 0) {
        total += bytesRead;
        // tampilkan sebagian data (misalnya byte pertama dari tiap blok)
        printf("Byte pertama di blok ini: %02X\n", buffer[0]);
    }

    fclose(fp);
    printf("Total byte yang dibaca: %zu\n", total);
    return 0;
}
