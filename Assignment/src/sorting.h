#pragma once
#include <iostream>
#include <algorithm>

void PrintArray(int arr[], int length);
void SelectionSort(int arr[], int length);
void BubbleSort(int arr[], int length);
void InsertionSort(int arr[], int length);
void CountingSort(int arr[], int length);

int Partition(int arr[], int low, int high);
void Quicksort(int arr[], int low, int high);
void Mergesort(int arr[], int length);
void Heapsort(int arr[], int length);