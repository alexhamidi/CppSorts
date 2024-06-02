#ifndef Selection_h
#define Selection_h

#include "Swap.h"
int* selectionSort(int* arr, int size) {
    
    for (int i = 0; i < size-1; i++) {
        int minimum = i;
        for (int j = i+1; j < size; j++) {
            if (arr[j] < arr[minimum]) minimum = j;
        }
        swap(arr[i], arr[minimum]);
    }
    
    return arr;
}
#endif /* Selection_h */
