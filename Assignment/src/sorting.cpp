#include "sorting.h"

void PrintArray(int arr[], int length) 
{
	for (int i = 0; i < length; i++) std::cout << arr[i] << " ";
	std::cout << std::endl << std::endl;
}

void SelectionSort(int arr[], int length)
{
	for (int i = 0; i < length - 1; i++) {
		int min = i;
		for (int j = i + 1; j < length; j++) {
			if (arr[j] < arr[min]) min = j;
		}
		if (min != i) std::swap(arr[min], arr[i]);
	}
};
void BubbleSort(int arr[], int length) 
{
	for (int i = 0; i < length - 1; i++) {
		bool swapped = false;
		for (int j = 0; j < length - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		if (!swapped) break;
	}
};
void InsertionSort(int arr[], int length) 
{
	for (int i = 1; i < length; i++) {
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j]) {
			std::swap(arr[j], arr[j - 1]);
			j--;
		}
	}
};

int Partition(int arr[], int min, int max)
{
	int pivot = arr[max];
	int pIndex = min - 1;

	for (int j = min; j <= max - 1; j++) {
		if (arr[j] < pivot) {
			pIndex++;
			std::swap(arr[pIndex], arr[j]);
		}
	}
	std::swap(arr[pIndex + 1], arr[max]);
	return pIndex + 1;
}
void Quicksort(int arr[], int min, int max) 
{
	if (min < max) {
		int pivotIndex = Partition(arr, min, max);

		Quicksort(arr, min, pivotIndex - 1);
		Quicksort(arr, pivotIndex + 1, max);
	}
};

void CountingSort(int arr[], int length)
{

};
void Mergesort(int arr[], int length)
{

};
void Heapsort(int arr[], int length)
{

};