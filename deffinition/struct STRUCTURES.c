#include <stdio.h>
#include <string.h>


struct Maha {
    int id;
    char nama[20];
    float nilai;
};

int main() {
    struct Maha mh;

    mh.id = 5301;
    strcpy(mh.nama, "batara");
    mh.nilai = 85.9;

    printf("ID : %d\n", mh.id );
    printf("Nama: %s\n", mh.nama );
    printf("Nilai: %.1f\n", mh.nilai );

    return 0;
}

struct tmhs {
    char nim[11];
    char name[26];
    float gpa;
} akad, ali, tono;  // <-- ini variabel, bukan fungsi

int main() {
    // Mengisi data mahasiswa Ali
    sprintf(ali.nim, "1234567890");
    sprintf(ali.name, "Ali");
    ali.gpa = 3.85;

    // Menampilkan data
    printf("NIM: %s\n", ali.nim);
    printf("Nama: %s\n", ali.name);
    printf("IPK: %.2f\n", ali.gpa);

    return 0;
}
