#include <stdio.h>
#include <string.h>

// Definisi struct
struct Mahasiswa {
    int id;
    char nama[20];
    float nilai;
};

int main() {
    struct Mahasiswa mhs1;

    mhs1.id = 1;
    strcpy(mhs1.nama, "Hans");
    mhs1.nilai = 85.5;

    printf("ID: %d\n", mhs1.id);
    printf("Nama: %s\n", mhs1.nama);
    printf("Nilai: %.2f\n", mhs1.nilai);

    return 0;
}
