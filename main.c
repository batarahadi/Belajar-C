#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct dataPegawai {
    char NIP[20];
    char nama[50];
    char alamat[100];
    char noHP[15];
    char jabatan[30];
    char golongan[3];
};

long hitungGajiPokok(char golongan[]) {
    if (strcmp(golongan, "D1") == 0) return 3000000;
    else if (strcmp(golongan, "D2") == 0) return 2500000;
    else if (strcmp(golongan, "D3") == 0) return 2000000;
    else return 0;
}

long hitungLembur(char golongan[]) {
    if (strcmp(golongan, "D1") == 0) return 15000;
    else if (strcmp(golongan, "D2") == 0) return 10000;
    else if (strcmp(golongan, "D3") == 0) return 5000;
    else return 0;
}

void formatRupiah(long angka, char hasil[]) {
    char temp[30];
    sprintf(temp, "%ld", angka);

    int len = strlen(temp), titik = 0, i, j = 0;
    char hasilTemp[40];

    for (i = len - 1; i >= 0; i--) {
        hasilTemp[j++] = temp[i];
        if (++titik == 3 && i != 0) {
            hasilTemp[j++] = '.';
            titik = 0;
        }
    }
    hasilTemp[j] = '\0';
    int len2 = strlen(hasilTemp);
    for (i = 0; i < len2; i++) {
        hasil[i] = hasilTemp[len2 - i - 1];
    }
    hasil[len2] = '\0';
}

int main() {
    struct dataPegawai pegawai;
    char gajiFormatted[40];
    char gajiTotalFormatted[40];
    int jamLembur;
    long gajiPokok, gajiLembur, totalGaji;

    // Input data pegawai
    printf("Masukkan NIP: ");
    scanf("%s", pegawai.NIP);
    getchar();
    printf("Masukkan Nama: ");
    fgets(pegawai.nama, sizeof(pegawai.nama), stdin);
    pegawai.nama[strcspn(pegawai.nama, "\n")] = 0;
    printf("Masukkan Golongan (D1/D2/D3): ");
    scanf("%s", pegawai.golongan);
    printf("Masukkan Jumlah Lembur (jam): ");
    scanf("%d", &jamLembur);

    // Hitung gaji
    gajiPokok = hitungGajiPokok(pegawai.golongan);
    gajiLembur = hitungLembur(pegawai.golongan) * jamLembur;
    totalGaji = gajiPokok + gajiLembur;

    // Format rupiah
    formatRupiah(gajiPokok, gajiFormatted);
    formatRupiah(totalGaji, gajiTotalFormatted);

    // Tampilkan
    printf("\n=== Data Pegawai ===\n");
    printf("NIP      : %s\n", pegawai.NIP);
    printf("Nama     : %s\n", pegawai.nama);
    printf("Golongan : %s\n", pegawai.golongan);
    printf("Gaji Pokok: Rp %s\n", gajiFormatted);
    printf("Jumlah Lembur: %d jam\n", jamLembur);
    printf("Total Gaji Bulan Ini: Rp %s\n", gajiTotalFormatted);

    return 0;
}