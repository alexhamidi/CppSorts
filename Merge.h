#ifndef Merge_h
#define Merge_h
#include "Swap.h"

void ms(int* arr, int left, int right);
void merge(int* arr, int left, int middle, int right);

int* mergeSort(int* arr, int size) {
    ms(arr, 0, size-1);
    return arr;
}

void ms(int* arr, int left, int right) {
    if (left < right) {
        int middle = (left + right)/2;
        ms(arr, left, middle);
        ms(arr, (middle+1), right);
        merge(arr, left, middle, right);
    }
}

void merge(int* arr, int left, int middle, int right) {
    int n1 = middle-left+1;
    int n2 = right-middle;
    
    int* l = new int[n1];
    int* r = new int[n2];
    
    for (int i = 0; i < n1; i++) {
        l[i] = arr[left+i];
    }
    for (int i = 0; i < n2; i++) {
        r[i] = arr[middle+i+1];
    }
    int i = 0;
    int j = 0;
    int k = left;
    while (i<n1 && j<n2) {
        if (l[i] <= r[j]) {
            arr[k++] = l[i++];
        } else {
            arr[k++] = r[j++];
        }
    }
    while (i<n1) arr[k++] = l[i++];
    while (j<n2) arr[k++] = r[j++];
    
    delete[] l;
    delete[] r;
}

#endif /* Merge_h */
