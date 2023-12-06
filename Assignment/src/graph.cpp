#include "graph.h"

//Depth-first
//A* searches

class Graph {
public:
	std::vector<Node*> nodes;
	std::vector<std::vector<Node*>> nodeGrid;
	Node* start;
	Node* end;

	~Graph() {
		for (Node* node : nodes) {
			delete node;
		}
	}
	void AddNode(Node* node) {
		nodes.push_back(node);
	}
	void ConnectNodes(Node* n1, Node* n2) {
		if (n1 && n2) {
			n1->AddNeighbour(n2);
			n2->AddNeighbour(n1); 
		}
	}

	void LoadToGraph(std::vector<std::string>& vector) {
		int rows = vector.size();
		int col = vector[0].size();
		int id = 0;
		std::vector<std::vector<Node*>> graph(rows, std::vector<Node*>(col, nullptr));

		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < col; j++) {
				if (vector[i][j] != 'X') {
					Vector2 position = { i, j };
					Node* node = new Node(id, position);
					id++;
					graph[i][j] = node;
					AddNode(node);
					
					if (vector[i][j] == 'S') start = graph[i][j];
					else if (vector[i][j] == 'G') end = graph[i][j];
				}
			}
		}
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < col; ++j) {
				Node* currentNode = graph[i][j];
				if (currentNode != nullptr) {
					if (i > 0 && graph[i - 1][j] != nullptr) ConnectNodes(currentNode, graph[i - 1][j]);
					if (i < rows - 1 && graph[i + 1][j] != nullptr) ConnectNodes(currentNode, graph[i + 1][j]);
					if (j > 0 && graph[i][j - 1] != nullptr) ConnectNodes(currentNode, graph[i][j - 1]);
					if (j < col - 1 && graph[i][j + 1] != nullptr) ConnectNodes(currentNode, graph[i][j + 1]);
				}
			}
		}
		this->nodeGrid = graph;
	}
	void BFS() {
		std::vector<bool> visited(nodes.size());
		std::queue<Node*> queue;

		queue.push(start);
		visited[start->id] = true;

		while (!queue.empty()) {
			Node* currentNode = queue.front();
			queue.pop();
			for (Node* neighbor : currentNode->neighbours) {
				if (!visited[neighbor->id]) {
					queue.push(neighbor);
					visited[neighbor->id] = true;
				}
			}
		}
	}
	void DFS() {

	}
	void A(){

	}
};