#include <stdio.h>

int main() {
    int n,i;
    float sum = 0, ratarata;

    printf("Masukkan jumlah bilangan: ");
    scanf("%d", &n);

    int arr[n];
    printf("Masukkan %d bilangan:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    for ( i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    ratarata = sum / n;
    printf("Rata-rata: %.2f\n", ratarata);
    
    return 0;
}