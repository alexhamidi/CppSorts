#ifndef Quick_h
#define Quick_h
#include "Swap.h"

void qs(int* arr, int left, int right);
int partition(int* arr, int left, int right);

int* quickSort(int* arr, int size) { //wrapper for abstraction
    qs(arr, 0, size - 1);
    return arr;
}

void qs(int* arr, int left, int right) {
    if (left < right) {
        int pivotIndex = partition(arr, left, right);
        qs(arr, left, pivotIndex - 1);
        qs(arr, pivotIndex + 1, right);
    }
}

int partition(int* arr, int left, int right) {
    int pivot = arr[right];
    int i = left-1;
    for (int j = left; j < right; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[right]);
    return i + 1;
}
#endif /* Quick_h */
