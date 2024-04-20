#ifndef array_h
#define array_h

#include "../../lib.h"

int sequentialSearch(int *arr, int len, int key);
int binarySearch(int *arr, int len, int key);
void swap(int *a, int *b);
void selectionSort(int *arr, int len, bool (*compare)(int a, int b));
void insertionSort(int *arr, int len, bool (*compare)(int a, int b));
void selectionSort(int *arr, int len, bool (*compare)(int a, int b));

#endif
