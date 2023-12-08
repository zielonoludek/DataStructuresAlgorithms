#pragma once
#include <string>
#include <queue>
#include <stack>
#include "node.h"

class Graph {
public:
    std::vector<Node*> nodes;
    std::vector<std::vector<Node*>> nodeGrid;
    Node* start;
    Node* end;
    
    Graph();
    void AddNode(Node* node);
    void ConnectNodes(Node* n1, Node* n2);
    void LoadToGraph(std::vector<std::string>& nodes);
    void DFS();
    void BFS();
};