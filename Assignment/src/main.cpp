#include <iostream>
#include <fstream>
#include <chrono>

#include "sorting.h"
#include "graph.h"

std::vector<std::string> ReadFile()
{
	std::ifstream file("AssignmentNodes.txt");
	std::string line;
	std::vector<std::string> vector;
	if (file.is_open()) {
		while (std::getline(file, line)) vector.push_back(line);
	}
	return vector;
}

void Sorting()
{
	srand((unsigned)time(NULL));
	const int length = 100000;
	int arr[length];

	for (int i = 0; i < length; i++) arr[i] = std::rand() % 100;
	//PrintArray(arr, length);

	auto start = std::chrono::high_resolution_clock::now();
	
	SelectionSort(arr, length);
	//BubbleSort(arr, length);
	//InsertionSort( arr, length);
	//#CountingSort( arr, length);

	//Quicksort(arr,  0, length - 1);
	//#Mergesort(arr,  length);
	//#Heapsort( arr,  length);
	
	auto stop = std::chrono::high_resolution_clock::now();
	std::cout << "Time: " << std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count() << " microseconds\n\n";
}
void CreateGraph() {
	std::vector<std::string> nodes = ReadFile();
}

int main() 
{
	//for (int i = 0; i < 10; i++) Sorting();
	CreateGraph();
	
	return 0;
}