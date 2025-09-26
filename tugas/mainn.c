#include<stdio.h>
#define UKURAN 5

float jumlahRata2(int arrey[], int jumlah) {
    int jumlah = 0;
    for (int i = 0; i < jumlah; i++) {
        jumlah += arrey[i];
    }
}

int main(){
    int dataNilai[UKURAN]={};
    int *pointer = dataNilai;

    printf("Masukan 5 nilai Siswa : \n");
    for (int i = 0; i < UKURAN; i++){
        printf("Nilai ke-%d : ", i+1);
        scanf("%d", &pointer[i]);
    }

    printf("Rata-rata nilai siswa adalah : %.2f\n", jumlahRata2(dataNilai, UKURAN));

    return 0;
}