#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 8;
    int *p = malloc(x * sizeof(int)); // Alokasi untuk 1 integer

    printf("\nIsi array: ");
    for (int i = 0; i < x; i++) {
        printf("%d ", p[i]);
    }

    free(p); // Bebaskan memori

    return 0;
}
