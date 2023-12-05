#include <stdlib.h>
#include <chrono>

#include "sorting.h"

int main() {
	const int length = 10;
	int arr[length];

	srand((unsigned)time(NULL));
	for (int i = 0; i < length; i++) arr[i] = std::rand() % length; 

	PrintArray(arr, length);
	
	//SelectionSort(arr, length);
	//BubbleSort(arr, length);
	//InsertionSort( arr, length);
	//#CountingSort( arr, length);

	//Quicksort(arr,  0, length - 1);
	//#Mergesort(arr,  length);
	//#Heapsort( arr,  length);

	PrintArray(arr, length);

	return 0;
}