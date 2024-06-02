#include <iostream>
#include "Selection.h"
#include "Bubble.h"
#include "Insertion.h"
#include "Heap.h"
#include "Quick.h"
#include "Merge.h"
#include "Radix.h"

void printNums(int* arr, int size);
void copyArray(int* array, int* arr, int size);

int main() {
    const int size = 5;
    int array[size] = {124, 211, 98, 646, 43};
    int arr1[size], arr2[size], arr3[size], arr4[size], arr5[size], arr6[size], arr7[size];
    copyArray(array, arr1, size);
    copyArray(array, arr2, size);
    copyArray(array, arr3, size);
    copyArray(array, arr4, size);
    copyArray(array, arr5, size);
    copyArray(array, arr6, size);
    copyArray(array, arr7, size);
    
    printNums(selectionSort(arr1, size), size);
    printNums(bubbleSort(arr2, size), size);
    printNums(insertionSort(arr3, size), size);
    printNums(heapSort(arr4, size), size);
    printNums(quickSort(arr5, size), size);
    printNums(mergeSort(arr6, size), size);
    printNums(radixSort(arr7, size), size);

    std::cout << "\n";
    return 0;
}

void printNums(int* arr, int size) {
    for (int i = 0; i < size; i++) std::cout << arr[i] << " ";
    std:: cout << "\n";
}

void copyArray(int* array, int* arr, int size) {
    for (int i = 0; i < size; i++) arr[i] = array[i];
}
