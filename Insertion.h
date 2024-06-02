#ifndef Insertion_h
#define Insertion_h
#include "Swap.h"

int* insertionSort(int* arr, int size) {
    
    for (int i = 1; i < size; i++) {
        int j = i;
        while (arr[j] < arr[j-1] && j > 0) {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }

    return arr;
    
}
#endif /*  Insertion_h */
