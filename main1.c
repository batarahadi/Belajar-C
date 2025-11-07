#include <stdio.h>
int main() {
    void *p;
    int x = 10;

    p = &x;          // p menyimpan alamat x (tanpa tipe)
    int *ip = (int*)p; // casting pointer
    printf("%d\n", *ip); // akses nilai lewat pointer
    return 0;
}