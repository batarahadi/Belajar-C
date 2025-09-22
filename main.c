#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum(int a, int b) {
    return a + b;
}
int main() {

    int hasil = sum(5, 3);
    printf("Hasil penjumlahan: %d\n", hasil);

    return 0;
}