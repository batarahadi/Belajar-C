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