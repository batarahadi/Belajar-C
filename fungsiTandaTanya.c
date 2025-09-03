#include <stdio.h>

int main() {
    int x = 7;
    printf("%d adalah %s\n", x, (x % 2 == 0) ? "genap" : "ganjil");
    return 0;
}
