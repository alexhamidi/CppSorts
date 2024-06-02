#ifndef Radix_h
#define Radix_h
#include "Swap.h"

void insert(int* arr, int size, int i);

int* radixSort(int* arr, int size) {
    //find the amount of places
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }

    for (int i = 1; max/i > 0; i*=10) {
        insert(arr, size, i);
    }
    return arr;
}

void insert(int* arr, int size, int p) {
    int output[size];
    int count[10] = {0};
    for (int i = 0; i < size; i++) {
        count[(arr[i]%(p*10))/p]++;
    }

    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    
    for (int i = size-1; i >= 0; i--) {
        output[count[(arr[i]%(p*10))/p]-1] = arr[i];
        count[(arr[i]%(p*10))/p]--;
    }
    
    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }
}


#endif /* Radix_h */
