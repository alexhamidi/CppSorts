#ifndef Heap_h
#define Heap_h
#include "Swap.h"

void reheapUp(int* heap, int root, int bottom);
void reheapDown(int* heap, int root, int bottom);

int* heapSort(int* heap, int size) {
    for (int i = 0; i < size; i++) {
        reheapUp(heap, 0, i);
    }
    reheapDown(heap, 0, size - 1);
    
    for (int i = size - 1; i > 0; i--) {
            swap(heap[i], heap[0]);
            reheapDown(heap, 0, i - 1);
    }
    
    return heap;
}

void reheapUp (int* heap, int root, int bottom) { //absolute top root; relative bottom
    if (bottom>root) {
        int parent = (bottom-1)/2;
        if(heap[parent]<heap[bottom]) {
            swap(heap[parent], heap[bottom]);
            reheapUp(heap, root, parent);
        }
    }
}
    
void reheapDown(int* heap, int root, int bottom) { //relative top parent; absolute bottom
    int rightChild = root*2+2;
    int leftChild = root*2+1;
    if (leftChild <= bottom) {
        if (rightChild <= bottom && heap[leftChild] < heap[rightChild]) {
            leftChild = rightChild;
        }
        if (heap[root] < heap[leftChild]) {
            swap(heap[root], heap[leftChild]);
            reheapDown(heap, leftChild, bottom);
        }
    }
}
#endif /*  Heap_h */
