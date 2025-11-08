#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int)); // Alokasi untuk 1 integer

    printf("\nIsi array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }

    free(p); // Bebaskan memori

    return 0;
}
