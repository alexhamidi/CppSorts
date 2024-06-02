#ifndef Bubble_h
#define Bubble_h

#include "Swap.h"

int* bubbleSort(int* arr, int size) {
    for (int i = 1; i < size; i++) {
        int j = 0;
        while (j < size-i)  {
            if (arr[j+1] < arr[j]) {
                swap(arr[j+1], arr[j]);
            }
                j++;
        }
    }
    return arr;
}
#endif /* Bubble_h */
