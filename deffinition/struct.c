#include <stdio.h>
#include <string.h>

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
