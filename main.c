#include <stdio.h>
#include <string.h>

struct dataPegawai {
    char NIP[20];
    char nama[50];
    char alamat[100];
    char nomorHp[15];
    char jabatan[30];
}pegawai;

// Fungsi untuk menentukan gaji pokok berdasarkan golongan
int gajiPokok(char golongan[]) {
    if (strcmp(golongan, "D1") == 0) {
        return 3000000;
    } else if (strcmp(golongan, "D2") == 0) {
        return 2500000;
    } else if (strcmp(golongan, "D3") == 0) {
        return 2000000;
    } else {
        return 0; // Jika golongan tidak valid
    }
}

// Fungsi untuk menentukan tarif lembur per jam berdasarkan golongan
int tarifLembur(char golongan[]) {
    if (strcmp(golongan, "D1") == 0) {
        return 15000;
    } else if (strcmp(golongan, "D2") == 0) {
        return 10000;
    } else if (strcmp(golongan, "D3") == 0) {
        return 5000;
    } else {
        return 0; // Jika golongan tidak valid
    }
}

int main() {
    // struct dataPegawai pegawai;
    // struct dataPegawai pegawai2;
    char golongan[3];
    int jamLembur;
    int gaji, tarif, totalGaji;

    // Input dari user
    printf("Tampilan Inputan 1\n");
    printf("NIP = ");
    fgets(pegawai.NIP, sizeof(pegawai.NIP), stdin);
    pegawai.NIP[strcspn(pegawai.NIP, "\n")] = 0;
    
    printf("Nama = ");
    fgets(pegawai.nama, sizeof(pegawai.nama), stdin);
    pegawai.nama[strcspn(pegawai.nama, "\n")] = 0;

    printf("Alamat = ");
    fgets(pegawai.alamat, sizeof(pegawai.alamat), stdin);
    pegawai.alamat[strcspn(pegawai.alamat, "\n")] = 0;

    printf("No HP = ");
    fgets(pegawai.nomorHp, sizeof(pegawai.nomorHp), stdin);
    pegawai.nomorHp[strcspn(pegawai.nomorHp, "\n")] = 0;

    printf("Jabatan = ");
    fgets(pegawai.jabatan, sizeof(pegawai.jabatan), stdin);
    pegawai.jabatan[strcspn(pegawai.jabatan, "\n")] = 0;

    printf("Golongan = "); 
    fgets(golongan, sizeof(golongan), stdin);
    golongan[strcspn(golongan, "\n")] = 0;

    printf("Gaji = %d\n", gajiPokok(golongan));

// Membersihkan buffer sebelum input berikutnya
    while (getchar() != '\n'); //<-- Membersihkan karakter sisa di buffer setelah scanf()

    // Input dari user
    printf("\nTampilan Inputan 2\n");
    printf("Masukkan NIP pegawai: ");
    fgets(pegawai.NIP, sizeof(pegawai.NIP), stdin);
    pegawai.NIP[strcspn(pegawai.NIP, "\n")] = 0;

    printf("Masukkan golongan (D1/D2/D3): ");
    fgets(golongan, sizeof(golongan), stdin);
    golongan[strcspn(golongan, "\n")] = 0;

    printf("Masukkan jumlah jam lembur: ");
    scanf("%d", &jamLembur);

    // Menentukan gaji pokok dan tarif lembur
    gaji = gajiPokok(golongan);
    tarif = tarifLembur(golongan);

    // Menghitung total gaji bulan ini
    totalGaji = gaji + (jamLembur * tarif);

    // Menampilkan hasil
    printf("Total Gaji   : Rp %d\n", totalGaji);

    return 0;
}
