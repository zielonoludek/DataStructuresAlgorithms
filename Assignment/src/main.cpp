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
	const int length = 1000;
	int arr[length];

	for (int i = 0; i < length; i++) arr[i] = std::rand() % length;

	auto start = std::chrono::high_resolution_clock::now();

	//SelectionSort(arr, length);
	//BubbleSort(arr, length);
	//InsertionSort( arr, length);
	//Quicksort(arr,  0, length - 1);

	auto stop = std::chrono::high_resolution_clock::now();
	std::cout << std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count() << "\n";
}
void SearchGraph(Graph graph) {
	auto start = std::chrono::high_resolution_clock::now();

	//graph.BFS();
	graph.DFS();

	auto stop = std::chrono::high_resolution_clock::now();
	std::cout << std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count() << " \n";
}

int main()
{
	std::vector<std::string> nodes = ReadFile();
	Graph graph;
	graph.LoadToGraph(nodes);

	//for (int i = 0; i < 10; i++) Sorting();
	for (int i = 0; i < 10; i++) SearchGraph(graph);

	return 0;
}