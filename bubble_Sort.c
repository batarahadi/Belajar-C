#include <stdio.h>

// Definisi fungsi bubble sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[5] = {5, 3, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n); // Pemanggilan fungsi

    printf("Hasil pengurutan: ");
    for (int i = 0; i < n; i++) {
        printf("%d \n", arr[i]);
    }

    return 0;
}
