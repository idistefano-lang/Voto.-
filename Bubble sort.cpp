#include <stdio.h>

// Funzione Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Scambio degli elementi
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Funzione per stampare un array
void stampaArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {5, 2, 9, 1, 6};
    int arr2[] = {8, 3, 7, 4, 0};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Array 1 originale: ");
    stampaArray(arr1, n1);

    printf("Array 2 originale: ");
    stampaArray(arr2, n2);

    bubbleSort(arr1, n1);
    bubbleSort(arr2, n2);

    printf("\nArray 1 ordinato: ");
    stampaArray(arr1, n1);

    printf("Array 2 ordinato: ");
    stampaArray(arr2, n2);

    return 0;
}
