#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void) {
    FILE *fptr;
    char filename[] = "haiku.txt";

    if ((fptr = fopen(filename, "r")) == NULL) {
        // perror menuliskan pesan error berdasarkan errno
        perror("Gagal membuka file");
        return 1; // FAIL
    }

    printf("Berhasil membuka file.\n");
    fclose(fptr);
    return 0;
}
