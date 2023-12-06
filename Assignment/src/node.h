#pragma once
#include <vector>

struct Vector2{
	int x;
	int y;
};
class Node {
public:
	int id;
	Vector2 position;
	std::vector<Node*> neighbours;

	Node(const int id,const Vector2& position) {
		this->position = position;
		this->id = id;
	}
	void AddNeighbour(Node* neighbour) {
		neighbours.push_back(neighbour);
	}
};