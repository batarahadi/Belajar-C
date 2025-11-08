#include <stdio.h>
#include <stdlib.h>

static int a = 5;
static void apalah() {
    static b = 10;
    printf("Nilai a di dalam apalah(): %d\n", b);
}


int main() {
    printf("Nilai a di dalam main(): %d\n", a);
    apalah();
    a += 10;
    printf("Nilai a setelah diubah di main(): %d\n", a);

    return 0;
}
