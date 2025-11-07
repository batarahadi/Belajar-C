#include <stdio.h>

int main() {
    int x = 1;
    int *f = &x;          // f menyimpan alamat x (tanpa tipe)

    printf("%p\n", f);

    return 0;
}