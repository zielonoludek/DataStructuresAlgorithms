#pragma once
#include <vector>

struct Vector2{
	int x;
	int y;
};
class Node
{
	Vector2 position;

public:
	std::vector<Node*> neighbours;

	Node(const Vector2& position) {
		this->position = position;
	}
	void AddNeighbour(Node* neighbour) {
		neighbours.push_back(neighbour);
	}
};