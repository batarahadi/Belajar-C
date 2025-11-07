#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *p = malloc(sizeof(int)); // Alokasi untuk 1 integer
    // int *p = (int*) malloc(sizeof(int)); // Alokasi untuk 1 integer

    *p = 25; // Isi nilai

    printf("Nilai p: %d\n", *p);

    free(p); // Bebaskan memori

    return 0;
}
