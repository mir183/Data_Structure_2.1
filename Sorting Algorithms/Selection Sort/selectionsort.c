#include <stdio.h>

int n;

int swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int findSmallest(int arr[], int start) {
    int smallestIndex = start;
    for (int i = start + 1; i < n; i++) {
        if (arr[i] < arr[smallestIndex]) {
            smallestIndex = i;
        }
    }
    return smallestIndex;
}

void selectionSort(int arr[]) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = findSmallest(arr, i);
        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
        }
    }
}

int main() {
    printf("Array size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
